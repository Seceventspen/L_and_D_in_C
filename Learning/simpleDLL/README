**DLL Message Box README**

---

**Project Overview:** The `msgBox.dll` is a basic attempt in C to create a Windows Dynamic Link Library (DLL) that pops up a message box upon being loaded. It demonstrates the usage of the `DllMain` function, a special entry point function in DLLs, to display a message box when the DLL is attached to a process.

**Functions and Windows API Calls Used:**

1. **DllMain:**
    - Purpose: Entry point function for a DLL. It is called by the system when processes and threads are initialized and terminated or when dynamic linking occurs.
    - Usage: Perform initialization and cleanup tasks specific to the DLL based on the reason for calling (`fdwReason`).
    - Parameters:
        - `hinstDLL`: Handle to the DLL module.
        - `fdwReason`: Reason for calling the function, such as process attachment, process detachment, thread attachment, or thread detachment.
        - `lpvReserved`: Reserved; should be NULL.
    - On-Screen: Upon the DLL being attached to a process (`DLL_PROCESS_ATTACH`), a message box will be displayed with the specified message, title, icon (information), and buttons (Yes, No, Cancel).

**Expected Outcome:** When the DLL is loaded into a process, typically during process startup, the `DllMain` function will be called with the reason `DLL_PROCESS_ATTACH`. As a result, a message box will be displayed with the text "1337 PeePee PoopyPants!", the title "HaxX0rs", an information icon, and three buttons: Yes, No, and Cancel.

**Usage:**

1. Compile the code to generate the DLL file.
2. Load the DLL into a process, either statically or dynamically.
3. Observe the appearance of the message box upon DLL attachment to the process.

**Note:** DLLs are commonly used to encapsulate reusable code and resources in Windows applications. `DllMain` is a crucial function in DLL development, responsible for initializing and cleaning up resources associated with the DLL.

**Disclaimer:** This project serves as a basic demonstration of creating a DLL that displays a message box upon being loaded into a process. It is intended for educational purposes only. Misuse of DLLs or malicious activities involving DLL injection is strictly prohibited. Use it responsibly and ethically.
