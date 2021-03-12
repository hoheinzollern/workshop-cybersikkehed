# Exercise 3: The Stack and Buffer overflows 
Welcome to the 3rd exercise of today. Here, we will learn more about the stack, how it works and what can cause a buffer overflow.

<b>Useful links:</b>
* [C documentation](https://devdocs.io/c/)
* [Common C code vulnerabilities](https://int0x33.medium.com/day-49-common-c-code-vulnerabilities-and-mitigations-7eded437ca4a)


## Exercise 3a
For this first exercise we are going to look at some c vulnerabilities. There are multiple notorious functions known for their vulnerability to adversaries. These fuctions can cause errors, which gives a malicious user direct root access if they know how to abuse them.

*Can you tell me which library functions which would get you in trouble with your employer?*

```
strcat() 
gets()
strncat()
fgets() 
sprintf()
puts()
printf() 
fputs() 
```

## Exercise 3b
Now, we are going to look at an actual piece of code! Here, I will present the c code and you will find the binary in the folder. Look at the code, run the binary, and see if you can exploit the vulnerability and get c to the right value:

<details>
<summary>Hint</summary>
<i>Hint: To run the binary, open the terminal and write `./Bof1` </i>
</details>

```c 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    char bof[24];
    
    printf("Give me some input: ");
    gets(bof);

    if (c != 0) {
        printf("Congratulations!\n");
        printf("c now has the value %x\n", c);
        exit(0);
    }
    printf("Not quite the solution...\n");
    exit(0);
}
```

## Exercise 3c
Now, we need some code injected into the binary. Can you exploit this program?
<details>
<summary>Hint</summary>
<i>Hint: Be very aware of endianness. </i>
</details>

```c 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    char bof[10];
    
    printf("Give me some input: ");
    gets(bof);

    if (c == 0xcafebabe) {
        printf("Congratulations!\n");
        printf("c now has the value %x\n", c);
        exit(0);
    }
    printf("Not quite the solution...\n");
    exit(0);
}
```

## Exercise 3d
To increase difficulty, we have made a slight change to the program. How would you get through now?
<details>
<summary>Hint</summary>
<i>Hint: Think about padding, you need to use gdb for this one. </i>
</details>

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    char bof[24];
    
    printf("Give me some input: ");
    gets(bof);

    if (c == 0xdeadbeef) {
        printf("Congratulations!\n");
        printf("c now has the value %x\n", c);
        exit(0);
    }
    printf("Not quite the solution...\n");
    exit(0);
}
```

## Exercise 3e

## Exercise 3f


    
   
   
