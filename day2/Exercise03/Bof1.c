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