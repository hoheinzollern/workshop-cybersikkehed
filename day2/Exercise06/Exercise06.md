# Exercise 6
### This is hard!

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

## 6b
This time the goal is a little different, the win function takes one argument that it will pass to the `system` function. Try and examine the system function using `man`.
You would like to open a shell on the system, this is done by executiong `/bin/sh`.

When we do ROP we would often like specific instructions or "gadgets", these are any instructions immidiately followed by a `ret` instruction.
You can try to find these using `objdump` and `grep`, something like `objdump -Mintel -D rop2 | grep -B 2 ret` should get you started.

Now we want to call a function with an argument, in x64 the arguments to functions are passed in rdi, rsi, rdx, rcx, and then the rest on the stack. This means we need to get our argument into the rdi register. You can use a hgadget for this. Find it and note down the address of the instruction.
Since we also don't know the location of the stack (assuming you have ASLR enabled) you also need to find the correct address of the argument `/bin/sh`. Look for it in the binary.

Now build your rop chain, it should look like the following:
`[padding][gadget][binsh str][win func]`

It can be usefull to build your payload in python and write it to a file, you can then use `$ r < exploitfile` in gdb to use it as input.
Now pop your first rop shell!

## 6c




