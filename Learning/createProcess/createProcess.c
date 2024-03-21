// Basic attempt in C to create a program to create a new Win process
// by a C noob ;< ) Seceventspen
// createProcess.c
// Win32 API ref: https://learn.microsoft.com/en-us/windows/win32/api/

#include <stdio.h>
#include <windows.h>

int main(void) {

	STARTUPINFOEXW si = { 0 };
	PROCESS_INFORMATION pi = { 0 };

	if (!CreateProcessW(
		L"C:\\Windows\\System32\\notepad.exe",
		NULL,
		NULL,
		NULL,
		FALSE,
		BELOW_NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&si,
		&pi

	)) {

		printf("(!) Proc Creation Failed, error: %ld", GetLastError());
		return EXIT_FAILURE;

	}
	printf("(+) Proc Started! pid: %ld", pi.dwProcessId);
	return EXIT_SUCCESS;

}
