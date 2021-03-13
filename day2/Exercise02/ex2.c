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
