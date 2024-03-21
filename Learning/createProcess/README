**Create Process README**

---

**Project Overview:** The `createProcess.c` program is a basic attempt in C to create a new Windows process using the Win32 API. It demonstrates the usage of the `CreateProcessW` function to launch an instance of Notepad.exe with specified parameters.

**Functions and Windows API Calls Used:**

1. **CreateProcessW:**
    - Purpose: Creates a new process and its primary thread.
    - Usage: Launches an instance of the specified executable file.
    - Parameters:
        - `lpApplicationName`: The path to the executable file to be launched.
        - `lpCommandLine`: The command line arguments passed to the new process.
        - `lpProcessAttributes`: Security attributes for the new process.
        - `lpThreadAttributes`: Security attributes for the new thread.
        - `bInheritHandles`: Whether the new process inherits handles from the calling process.
        - `dwCreationFlags`: Flags that control the creation of the process.
        - `lpEnvironment`: Environment block for the new process.
        - `lpCurrentDirectory`: The current directory for the new process.
        - `lpStartupInfo`: Startup information for the new process.
        - `lpProcessInformation`: Process information for the new process.
    - Expected Outcome: If successful, a new instance of Notepad.exe will be launched, and the process ID (PID) will be printed. Otherwise, an error message will be displayed indicating the failure to create the process.

**Expected Outcome:** Upon execution, the program attempts to create a new process for Notepad.exe with default parameters. If successful, it prints the PID of the newly created process. Otherwise, it displays an error message indicating the failure to create the process.

**Usage:**

1. Compile the code using a C compiler compatible with the target system.
2. Execute the compiled program.
3. Monitor the program's output for any error messages or confirmation of successful process creation.
4. Verify the outcome by observing the launch of a new instance of Notepad.exe.

**Note:** Ensure that the path to Notepad.exe (`C:\\Windows\\System32\\notepad.exe`) is correct and exists on the target system. Adjust the path accordingly if Notepad.exe is located elsewhere.

**Disclaimer:** This project serves as a basic demonstration of process creation in Windows using the Win32 API. It is intended for educational purposes only. Misuse of this code for malicious activities is strictly prohibited. Use it responsibly and ethically.
