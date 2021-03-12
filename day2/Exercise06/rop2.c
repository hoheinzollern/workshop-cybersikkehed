#include <stdio.h>
#include <stdlib.h>
void win(char* cmd) {
    system(cmd);;
}

void help() {
    __asm__( "pop %rsi;"
             "ret;");
}

int main() {
    char buf[25];

    gets(buf);

    return 0;
}
