// Basic attempt in C to create a Win pop-up msg box
// by a C noob ^_^ Seceventspen
// msgBox.c
// Win32 API ref: https://learn.microsoft.com/en-us/windows/win32/api/

#include <windows.h>


int main(void)
{
	MessageBoxW(
		NULL,
		L"1337 PeePee PoopyPants!",
		L"HaxX0rs",
		MB_ICONINFORMATION | MB_YESNOCANCEL
	);

	return EXIT_SUCCESS;
}
