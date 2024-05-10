# Hello World in C Readme

If you're here, you're likely exploring the classic "Hello, World!" program in the C programming language. Let's dive into what this simple yet iconic code does and how it works.

*Note: there is nothing ground breaking here, just me documenting my learnings etc etc*

## Overview

The `helloWorld.c` file contains a concise C program that demonstrates the fundamental concept of outputting text to the console. Let's break it down step by step:
### C Code

```C
// Hello World in C
// by a C noob ^_^ Seceventspen
// helloWorld.c

#include <stdio.h>

int main() {
   // printf() displays the string inside quotation
   printf("Hello, World 2024!");
   return 0;
}
```

### Output

``` text
Hello, World 2024!
```
### Explanation

- `#include <stdio.h>`: This line includes the standard input-output header file (`stdio.h`), which contains functions like `printf()` used for input and output operations.
    
- `int main() { }`: This is the main function where the execution of the program begins and ends. In C, every program must have a `main()` function.
    
- `printf("Hello, World 2024!");`: Inside the `main()` function, `printf()` is called to display the string `"Hello, World 2024!"` to the console. The `\n` is a special character representing a newline, which moves the cursor to the next line after printing the text.
    
- `return 0;`: Finally, `return 0;` indicates that the program has executed successfully and is returning a status of 0 to the operating system.
    

## Expected Outcome

When you compile and run this C program, it will output the famous greeting `"Hello, World 2024!"` to the console. This simple yet significant program serves as a starting point for beginners learning C programming and is often the first program written when exploring a new programming language.

## Usage

To run this program, you'll need a C compiler installed on your system. You can use popular compilers like GCC (GNU Compiler Collection) on Linux, macOS, or Windows.

Visual Studio 20XX can do all the necessary compiling or alternative you can install a C compiler natively and use the Windows cli to do everything.

### Visual Studio

If you prefer using Visual Studio for your C programming, follow these steps to compile and run the program:

1. Open Visual Studio: Launch Visual Studio and create a new project or open an existing one where you want to add the helloWorld.c file.
2. Create a New C File: If you're starting a new project, create a new C source file (File > New > File). Otherwise, you can add the helloWorld.c file to your existing project.
3. Copy Code: Copy the code provided in helloWorld.c and paste it into your new or existing C file in Visual Studio.
4. Build Solution: Once the code is in place, build the solution (Build > Build Solution). This will compile the program and check for any errors.
5. Run Program: After a successful build, you can run the program by selecting Start or pressing F5. The output will be displayed in the console window within Visual Studio.

### Linux

Alternative you can use Linux:

1. Save the provided code in a file named `helloWorld.c`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing `helloWorld.c`.
4. Compile the code using the command:
    
    `gcc helloWorld.c -o helloWorld`
    
5. Execute the compiled program by running:
    
    `./helloWorld`
    
Regarless of which compliation method you choose, after following you're preferred steps, you should see the message `"Hello, World 2024!"` displayed on your console.

## Conclusion

Congratulations! You've now explored the timeless tradition of writing the "Hello, World!" program in C. This humble yet essential code serves as a cornerstone in the journey of every coder, marking the beginning of countless coding adventures.

Feel free to modify, experiment, and expand upon this code as you continue your exploration of the fascinating world of programming. Happy coding! 🚀🌍
