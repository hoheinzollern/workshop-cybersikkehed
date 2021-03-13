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