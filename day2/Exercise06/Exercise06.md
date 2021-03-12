# Exercise 6

## 6a
In this exercise you will learn what it means to avoid protections in binaries.
The first protection that was introduces was the NX bit.
This is because the OS developers realized that it is important to differentiate data and code, especially when it comes to security. They made the greate assumption that whatever is on the stack, really should not be code, and so should not be executed.

This removes the ease of dropping shellcode on the stack, and jumping to it.
What will happen is that the memory page is marked as "Not-Executable", and so if the PC (program counter) is pointing to some address in this range, a segfault is thrown and the program is terminated.

The nx bit is set in the binary, and is read by the OS while it is preparing the program for execution.
<details>
<summary>Explanation (PRO)</summary>
The executable format on unix systems is called ELF (Executable and Linkable File format), and this file format has a specific structure.
_Run `man elf` on linux to learn about it!_
One of the many things in the ELF file format is the Program Header table, that describes a butch of significant stuff about the binary. This is also where the information about how the loader should create the stack, this information is stored in the `GNU_STACK` program header. It looks like this (run `readelf -l ` on a program to see):
```
GNU_STACK      0x0000000000000000 0x0000000000000000 0x0000000000000000
               0x0000000000000000 0x0000000000000000  RW     10
```
You see the "RW" on the left? These are the flags, telling the loader that the stack should be (R)eadable and (W)ritable.
Note that it is specifically not e(X)ecutable meaning this has the NX bit set.
_checksec_ is a great tool for checking all kinds of binary protections, you can find it here https://github.com/slimm609/checksec.sh
</details>

The `rop` binary has the NX bit set, and so the stack is not executable, luckily for you we have added a `win` function you can call :) .


