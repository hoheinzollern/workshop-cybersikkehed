# Integer under and overflow

C has represents integers in [2 complement](https://en.wikipedia.org/wiki/Two's_complement) and does not automatically insert bounds checking.

## Exercise 1: integer underflow

Can you find an integer that wraps around the 2 complement representation so that the following program satisfies the condition in the `if` statement?

```c
#include <stdio.h>

void main(void) {
    int x = 42;
    int y;
    printf("Give me a number ");
    scanf("%i", &y);
    x = x + y;
    if (y > 0 && x < 42) {
        system("cmatrix");
    } else {
        printf("42 + %i = %i\n", y);
    }
}
```

## Exercise 2: array bounds

Fixed size arrays in C are stored on the stack like other variables, and there is no bounds checking.
This means, that if the index to an array goes below or above a certain threshold, you will be able to change the values of some neighboring variables.

Try to trick the following program so to change the values of `a` and `b`.

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0xcafe;
    int numbers[10];
    int b = 0xbabe;
    int i = 0;
    unsigned int jump;
    while (i <= 10) {
        printf("How much do you want to jump? (i is %i) ", i);
        scanf("%i", &jump);
        numbers[i] = 1;
        i = i + jump;
    }
    if (a != 0xcafe && b != 0xbabe) {
        printf("You win!");
    }
    return 0;
}
```