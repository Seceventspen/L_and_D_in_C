/ Basic attempt in C to create a Win DLL that pops a msg box
// by a C noob ^_^ Seceventspen
// msgBox.dll
// Win32 API ref: https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-functions  >> DLLMain

/*
BOOL WINAPI DllMain(
  _In_ HINSTANCE hinstDLL,		// handle  to DLL module
  _In_ DWORD     fdwReason,		// reason for calling function
  _In_ LPVOID    lpvReserved	// reserved
);
*/


BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ LPVOID lpvReserved) {

    // Perform actions based on the reason for calling.
    switch (fdwReason) {
    
    case DLL_PROCESS_ATTACH:
        MessageBoxW(NULL, L"1337 PeePee PoopyPants!", L"HaxX0rs", MB_ICONINFORMATION | MB_YESNOCANCEL);
        break;
    }

    return TRUE;  // Successful DLL_PROCESS_ATTACH.

}
