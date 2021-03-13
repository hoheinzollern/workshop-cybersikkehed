#include <stdio.h>

void win() {
    printf("You've won!");
    exit(0);
}

int main() {
    char buf[25];

    gets(buf);

    return 0;
}
