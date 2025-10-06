# My C Journey: 100 Steps to Mastery

This repository tracks my progress through a list of 100 programming tasks, from "Hello, World!" to building an operating system kernel. Each checked item represents a completed challenge on my journey to becoming a proficient developer.

---

## The Checklist

- [x] 1. Write a C program that prints "Hello, World!" to the console and compiles with `clang`.
- [x] 2. Write a program that declares an integer, a character, and a float, assigns them values, and prints the values and their sizes using `sizeof`.
- [x] 3. Write a program that takes two numbers as input from the user (`scanf`) and prints their sum.
- [x] 4. Implement the "FizzBuzz" challenge: print numbers from 1 to 100, replacing multiples of 3 with "Fizz", 5 with "Buzz", and both with "FizzBuzz".
- [x] 5. Write a function that takes an integer as an argument and returns the value multiplied by two. Call it from `main`.
- [x] 6. Write a program with one global variable and a function with a local variable of the same name. Print both to demonstrate variable scope.
- [x] 7. Write a program that declares a string (char array), initializes it, and prints its length using `strlen`.
- [x] 8. Write a program that prints its own name and the number of command-line arguments it received (`argc`, `argv`).
- [ ] 9. Use `lldb` to set a breakpoint in your FizzBuzz program and step through the loop 5 times, inspecting the counter variable.
- [x] 10. Write a program that uses `#define` to create a constant and `#ifdef` to conditionally compile a `printf` statement.
- [x] 11. Define a `struct` to represent a `Point` with `x` and `y` coordinates. Create an instance and print its members.
- [x] 12. Write a program that opens a file named `test.txt`, writes "Hello, File!" into it, and closes it. Verify the file's content.
- [x] 13. Write a C program that mimics the `cat` command: it should open a file specified by a command-line argument and print its contents to the console.
- [x] 14. Create two `.c` files and one `.h` file. Define a function in one `.c` file, declare it in the `.h` file, and call it from the other `.c` file.
- [x] 15. Compile the multi-file project from the previous step into a single executable.
- [x] 16. Write a `Makefile` with rules to compile your multi-file project, including a `clean` rule to remove object files and the executable.
- [x] 17. Write a function that attempts to modify a `const` variable and observe the compiler error.
- [x] 18. Write a program that reads key-value pairs from a text file (e.g., `SETTING=VALUE`) and prints them.
- [x] 19. Implement a stack data structure using a `struct` and an array, including `push` and `pop` functions.
- [ ] 20. Write a C program that mimics the `wc -l` command: it should count the number of lines in a file specified by a command-line argument.
- [ ] 21. Write a program that declares an integer, creates a pointer to it, prints the address, and then uses the pointer to change the integer's value.
- [ ] 22. Create an array of 5 integers. Create a pointer to the first element and use pointer arithmetic to access and print each element.
- [ ] 23. Create an array of `Point` structs. Create a pointer to the first struct and use it to access the `x` and `y` members of the second element.
- [ ] 24. Write two functions, `add` and `subtract`. Create a function pointer and use it to call both functions.
- [ ] 25. Write a program and draw a diagram of its memory layout, labeling where the main function, global variables, and local variables are stored.
- [ ] 26. Write a program that allocates memory for 10 integers using `malloc`, fills it with values, prints them, and then frees the memory.
- [ ] 27. Write a program that intentionally creates a memory leak (allocate without freeing) and a dangling pointer (free then use).
- [ ] 28. Write a program that takes an integer and uses bitwise operators to check if its 3rd bit is set.
- [ ] 29. Write a function that takes an integer and a bit position `n` and returns the integer with the `n`-th bit set to 1.
- [ ] 30. Write a program that casts a `long` to a `short` and prints both, observing the data loss.
- [ ] 31. Write a generic `swap` function that can swap two variables of any type using `void` pointers and `memcpy`.
- [ ] 32. Implement a singly linked list from scratch using `struct`, pointers, and `malloc`. Include functions for insertion and deletion.
- [ ] 33. Create a simple static library (`.a` file) and a program that links against it.
- [ ] 34. Use the `nm` command on an object file from your linked list project and identify the symbols for your functions.
- [ ] 35. Implement a hash table from scratch using an array of linked lists (chaining).
- [ ] 36. Compile a C program with the `-S` flag and inspect the generated assembly file.
- [ ] 37. Identify the `mov`, `add`, `ldr`, and `str` instructions in the assembly output from the previous step.
- [ ] 38. Write a standalone "Hello, World!" program entirely in ARM64 assembly and run it.
- [ ] 39. In your assembly program, write code that loads values into registers `x0` through `x4`.
- [ ] 40. Write a C function and analyze its assembly output to identify the function prologue, epilogue, and where the stack pointer is modified.
- [ ] 41. Write a simple assembly function that adds two numbers. Call this function from a C program.
- [ ] 42. Research CPU privilege levels and write a markdown document explaining the difference between User Mode and Kernel Mode.
- [ ] 43. Write a C program that causes a segmentation fault and another that causes a division-by-zero error.
- [ ] 44. Install a cross-compiler toolchain for `x86_64-elf`.
- [ ] 45. Install the QEMU emulator.
- [ ] 46. Write a "bare metal" C program (no standard libraries) that runs in a loop and compile it with your cross-compiler.
- [ ] 47. Run your bare metal program in QEMU.
- [ ] 48. Write a bare metal program that writes a character to the QEMU serial port.
- [ ] 49. Research the Multiboot specification.
- [ ] 50. Configure the Limine bootloader to load and run your bare metal program in QEMU.
- [ ] 51. Research the x86 `syscall` instruction and write a markdown document explaining its purpose.
- [ ] 52. Write a C program that uses the `open`, `read`, and `close` system calls to print the contents of a file.
- [ ] 53. Re-implement your `cat` tool using only these low-level system calls instead of `stdio.h` functions.
- [ ] 54. Write a program that uses `fork()` to create a child process. Have the parent and child print different messages.
- [ ] 55. Write a simple shell program that can read a command from the user and execute it using `fork()` and `execve()`.
- [ ] 56. Write a program where a parent process sends a message to a child process using a `pipe()`.
- [ ] 57. Use your simple shell to execute a command pipeline like `ls | wc -l`.
- [ ] 58. Write a program that uses the `stat()` system call to print the size and permissions of a file.
- [ ] 59. Write a program that uses `mmap()` to allocate a region of memory and then writes to it.
- [ ] 60. Write a program where one process sends a `SIGUSR1` signal to another using `kill()`.
- [ ] 61. Write a program that creates two threads using Pthreads, with each thread printing a different message.
- [ ] 62. Create a program with a shared global counter and two threads that increment it 1,000,000 times each, demonstrating a race condition.
- [ ] 63. Fix the race condition in the previous program using a `pthread_mutex`.
- [ ] 64. Use `dtruss` (on macOS) or `strace` (on Linux) to view the system calls made by your simple shell when it runs a command.
- [ ] 65. Write a markdown document explaining the key differences between a process and a thread.
- [ ] 66. Write a bare metal C kernel that clears the screen and prints a character by writing directly to the VGA text mode buffer (`0xB8000`).
- [ ] 67. Set up an Interrupt Descriptor Table (IDT) in your kernel and register a handler for the division-by-zero exception.
- [ ] 68. Write code in your kernel that intentionally divides by zero to trigger your exception handler.
- [ ] 69. Configure the Programmable Interrupt Timer (PIT) to fire an interrupt at 100Hz.
- [ ] 70. Write an interrupt handler for the PIT that increments a global tick counter.
- [ ] 71. Implement a keyboard driver that reads scancodes from the keyboard controller port and prints characters to the screen.
- [ ] 72. Research physical memory map detection (e.g., via the bootloader) and write a function that prints available memory regions.
- [ ] 73. Implement a physical memory page frame allocator using a bitmap.
- [ ] 74. Research x86 paging and draw a diagram explaining how a virtual address is translated to a physical one.
- [ ] 75. Implement the code to set up a basic page directory and page tables, identity-mapping the first few megabytes of memory.
- [ ] 76. Write the code to enable paging by loading your page directory into the `CR3` register.
- [ ] 77. Implement a simple `kmalloc()` and `kfree()` for your kernel using a basic bump allocator or block list.
- [ ] 78. Design a C `struct` to represent a process (Process Control Block) containing its ID, state, and registers.
- [ ] 79. Implement a linked list to act as a "ready queue" for runnable processes.
- [ ] 80. Implement a simple round-robin scheduler function that picks the next process from the ready queue.
- [ ] 81. Implement a `yield()` function that saves the current CPU state (registers) and calls the scheduler to switch to the next task.
- [ ] 82. Integrate the scheduler with your timer interrupt handler so that a task switch occurs automatically on every tick.
- [ ] 83. Define a system call number and write a basic system call handler that is triggered by a software interrupt (e.g., `int 0x80`).
- [ ] 84. Write the assembly stub for the system call interrupt that saves registers and calls your C handler function.
- [ ] 85. Design a simple Virtual File System (VFS) interface with `open`, `read`, `write` function pointers in a `struct`.
- [ ] 86. Create a simple "initrd" (initial ramdisk) containing a small text file and bundle it with your kernel image.
- [ ] 87. Write an ELF parser in your kernel that can read and validate the header of a user program from the initrd.
- [ ] 88. Write the code to load an ELF program's sections into a newly allocated virtual address space and set up a user-mode stack.
- [ ] 89. Implement a `fork()` system call that creates a copy of the current process with a new address space.
- [ ] 90. Implement an `execve()` system call that replaces the current process's memory space with a new program loaded from the initrd.
- [ ] 91. Implement a `wait()` system call that allows a parent process to wait for a child to exit.
- [ ] 92. Implement a `write()` system call that lets a user program print characters to the screen via the kernel.
- [ ] 93. Implement a simple RAM-based file system (`ramfs`) that conforms to your VFS interface.
- [ ] 94. Implement the VFS `open` and `read` system calls so a user program can read a file from the ramfs.
- [ ] 95. Port a minimal C standard library (`libc`) with functions for your system calls.
- [ ] 96. Compile a simple shell program with your minimal libc and run it as the first user process in your kernel.
- [ ] 97. Write a driver for the serial port and implement `read`/`write` system calls for it.
- [ ] 98. Implement a `kill()` system call and the basics of signal handling for user processes.
- [ ] 99. Implement a `pipe()` system call for inter-process communication in your kernel.
- [ ] 100. Follow a guide to boot your kernel on a real, physical machine (e.g., an old laptop or a Raspberry Pi).

---

## How to Use

1.  As a task is completed, check it off by changing `[ ]` to `[x]`.
2.  Commit the changes to log your progress.
3.  (Optional) Create a separate folder for each major project to store the source code.

## Tools & Environment

* **Language(s):** C, ARM64 Assembly
* **OS:** macOS (Apple Silicon)
* **Editor:** Neovim
* **Compiler/Tools:** Clang, Xcode Command Line Tools


