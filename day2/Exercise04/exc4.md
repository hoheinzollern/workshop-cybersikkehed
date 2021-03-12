# Exercise 4
## 4.0
A shellcode is a binary we want to inject as a payload into a victim program. In the following exercises you will need to make use of a shellcode to do your exploits. You can either use the following:
*\x31\xc9\xf7\xe1\x51\xbf\xd0\xd0\x8c\x97\xbe\xd0\x9d\x96\x91\xf7\xd7\xf7\xd6\x57\x56\x89\xe3\xb0\x0b\xcd\x80*

You can also try find some yourself online: http://shell-storm.org/shellcode/.

You can get the binary from a string as above doing the following:<br>
*python -c 'print "\x31\xc9\xf7\xe1\x51\xbf\xd0\xd0\x8c\x97\xbe\xd0\x9d\x96\x91\xf7\xd7\xf7\xd6\x57\x56\x89\xe3\xb0\x0b\xcd\x80"'*

## 4.1
Let's first look at the "var" binary file. The code behind it is as follows:<br>
```c
#include <stdio.h>
int main(){
    int (*ret)();
    ret = getenv("HELLO");
    ret();
    return 0;
}
```
The "getenv" acquires the value of the environment value "HELLO" and attempts to execute it. How may we use this to execute the aformentioned shell code?

This exercise is heavily inspired from https://overthewire.org/wargames/narnia level 1.
<details>
<summary>Hint</summary>
<i>export HELLO=`...`</i>
</details>

## 4.2
Next we will look at the binary "buffer". Before trying to solve this exercise you should ensure that ASLR is disabled on your system using:<br>
*echo 0 | sudo tee /proc/sys/kernel/randomize_va_space*

The source code contains a dangerous "gets" call using a buffer:
```c
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int func()
{
    char buffer[64]
    gets(buffer)
}

int main(int argc, char **argv)
{
    func();
}
```
Try to disassemble the binary using cutter or gdb (*disas main*, *disas func*). Try setting a breakpoint at the leave instruction to see what the instruction pointer is pointing at in memory. How may we overwrite this?<br>
*Hint: you will need to calculate the padding from the address of the buffer to instruction pointer target from above*

This exercise is inspired from the tutorial from here https://0xrick.github.io/binary-exploitation/bof5/. You can find a lot of clues as to how the input should be created.