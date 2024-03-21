**Thread Injector README**

---

**Project Overview:** This project is a simple `CreateThread` injector designed to take shellcode, create a thread, and inject it into the current process. It leverages essential Windows API calls to allocate memory, write to process memory, create a thread, and handle thread synchronization.

**Functions and Windows API Calls Used:**

1. **VirtualAlloc:**
    
    - Purpose: Allocates memory in the virtual address space of the current process.
    - Usage: Allocate memory for the shellcode with appropriate permissions (PAGE_EXECUTE_READ).
    - Expected Outcome: Successful allocation of memory for shellcode execution.
2. **WriteProcessMemory:**
    
    - Purpose: Writes data to an area of memory in a specified process.
    - Usage: Write the shellcode to the allocated memory space.
    - Expected Outcome: Successful writing of shellcode into process memory.
3. **CreateThread:**
    
    - Purpose: Creates a new thread for execution in the address space of the calling process.
    - Usage: Create a thread to execute the shellcode.
    - Expected Outcome: Successful creation of a thread for shellcode execution.
4. **WaitForSingleObject:**
    
    - Purpose: Waits until the specified object is in the signaled state or the time-out interval elapses.
    - Usage: Wait for the thread to complete its execution.
    - Expected Outcome: Synchronization with the thread's execution, ensuring completion before proceeding.

**Expected Outcome:** Upon execution, the program allocates memory for the provided shellcode, writes the shellcode into the allocated memory space, creates a new thread to execute the shellcode, and waits for the thread to complete its execution. Finally, it reports the successful execution of the injected code.

**Note:** Ensure that the `shell_code_here` variable contains valid shellcode compatible with the current system architecture. The success of the injection depends on the integrity and functionality of the provided shellcode.

**Usage:**

1. Compile the code using a C compiler compatible with the target system.
2. Execute the compiled program.
3. Verify the successful injection of the shellcode by monitoring the program's output for the "Mischief managed!" message.

---

## MSDN Refs

**VirtualAlloc**:
https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualalloc

```c++
LPVOID VirtualAlloc(
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

**CreateThread:**
https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread

```c++
HANDLE CreateThread(
  [in, optional]  LPSECURITY_ATTRIBUTES   lpThreadAttributes,
  [in]            SIZE_T                  dwStackSize,
  [in]            LPTHREAD_START_ROUTINE  lpStartAddress,
  [in, optional]  __drv_aliasesMem LPVOID lpParameter,
  [in]            DWORD                   dwCreationFlags,
  [out, optional] LPDWORD                 lpThreadId
);
```

- Creating Threads Example: https://learn.microsoft.com/en-us/windows/win32/procthread/creating-threads

**WaitForSingleObject:**
https://learn.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-waitforsingleobject

```c++
DWORD WaitForSingleObject(
  [in] HANDLE hHandle,
  [in] DWORD  dwMilliseconds
);
```

---

***Disclaimer:** This project is for educational purposes only. Misuse of this code for malicious intent is strictly prohibited. Use it responsibly and ethically.*
