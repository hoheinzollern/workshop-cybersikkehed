#include <stdio.h>
#include <stdlib.h>
void win(char* cmd) {
    system(cmd);
}

void help2() {
    __asm__(".string \"/bin/sh\"");
}

void help() {
    __asm__( "pop %rdi;"
             "ret;");
}

int main() {
    char buf[25];

    gets(buf);

    return 0;
}
