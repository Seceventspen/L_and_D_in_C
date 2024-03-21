**Process Injector README**

---

**Project Overview:** This project entails creating a process injector designed to inject shellcode into a specified process identified by its Process ID (PID). The injected shellcode spawns a message box within the target process. The implementation utilizes essential Windows API calls for handling process manipulation and memory allocation.

**Functions and Windows API Calls Used:**

1. **OpenProcess:**
    
    - Purpose: Opens a handle to an existing process for manipulation.
    - Usage: Obtain a handle to the target process identified by its PID.
    - Expected Outcome: Successful retrieval of a handle to the target process for further manipulation.
2. **VirtualAllocEx:**
    
    - Purpose: Allocates memory within the virtual address space of a specified process.
    - Usage: Allocate memory within the target process for storing the shellcode.
    - Expected Outcome: Successful allocation of memory within the target process for shellcode execution.
3. **WriteProcessMemory:**
    
    - Purpose: Writes data to an area of memory within a specified process.
    - Usage: Write the shellcode into the allocated memory space within the target process.
    - Expected Outcome: Successful writing of shellcode into the allocated memory space within the target process.
4. **CreateRemoteThreadEx:**
    
    - Purpose: Creates a thread that runs in the address space of another process.
    - Usage: Create a remote thread within the target process to execute the shellcode.
    - Expected Outcome: Successful creation of a remote thread within the target process for shellcode execution.
5. **CloseHandle:**
    
    - Purpose: Closes an open object handle.
    - Usage: Close handles to the thread and process after their respective usage.
    - Expected Outcome: Proper cleanup of resources and handles associated with the injected thread and process.

**Expected Outcome:** Upon execution, the program opens a handle to the specified process, allocates memory within the process's address space, writes the provided shellcode into the allocated memory, creates a remote thread within the process to execute the shellcode, waits for the thread to finish execution, and performs cleanup by closing handles associated with the thread and process. Finally, it reports the successful completion of the injection process.

**Usage:**

1. Compile the code using a C compiler compatible with the target system.
2. Execute the compiled program, providing the PID of the target process as a command-line argument.
3. Monitor the program's output for any error messages or confirmation of successful injection.
4. Verify the injection's success by observing the intended behavior within the target process (e.g., appearance of a message box).

**Note:** Ensure that the `Shell_code_here` variable contains valid shellcode compatible with the target system architecture. Additionally, exercise caution and ensure legal and ethical use of this tool.

---
## MSDN Refs

**OpenProcess**
https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-openprocess

```c++
HANDLE OpenProcess(
  [in] DWORD dwDesiredAccess,
  [in] BOOL  bInheritHandle,
  [in] DWORD dwProcessId
);
```

**VirtualAllocEX**:
https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualallocex

```c++
LPVOID VirtualAllocEx(
  [in]           HANDLE hProcess,
  [in, optional] LPVOID lpAddress,
  [in]           SIZE_T dwSize,
  [in]           DWORD  flAllocationType,
  [in]           DWORD  flProtect
);
```

**WriteProcessMemory:**
https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-writeprocessmemory

```c++
BOOL WriteProcessMemory(
  [in]  HANDLE  hProcess,
  [in]  LPVOID  lpBaseAddress,
  [in]  LPCVOID lpBuffer,
  [in]  SIZE_T  nSize,
  [out] SIZE_T  *lpNumberOfBytesWritten
);
```

**CreateRemoteThreadEx:**
https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createremotethreadex

```c++
HANDLE CreateRemoteThreadEx(
  [in]            HANDLE                       hProcess,
  [in, optional]  LPSECURITY_ATTRIBUTES        lpThreadAttributes,
  [in]            SIZE_T                       dwStackSize,
  [in]            LPTHREAD_START_ROUTINE       lpStartAddress,
  [in, optional]  LPVOID                       lpParameter,
  [in]            DWORD                        dwCreationFlags,
  [in, optional]  LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
  [out, optional] LPDWORD                      lpThreadId
);
```

- Creating Threads Example: https://learn.microsoft.com/en-us/windows/win32/procthread/creating-threads

**CloseHandle**
https://learn.microsoft.com/en-us/windows/win32/api/handleapi/nf-handleapi-closehandle

```C++
BOOL CloseHandle(
  [in] HANDLE hObject
);
```

**WaitForSingleObject:**
https://learn.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-waitforsingleobject

```c++
DWORD WaitForSingleObject(
  [in] HANDLE hHandle,
  [in] DWORD  dwMilliseconds
);
```

---

***Disclaimer:** This project is intended for educational purposes only. Misuse of this code for malicious activities is strictly prohibited. Use it responsibly and ethically.*
