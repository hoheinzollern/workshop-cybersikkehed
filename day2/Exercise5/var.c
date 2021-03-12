#include <stdio.h>

int main(){
    int (*ret)();
    ret = getenv("HELLO");
    ret();
    return 0;
}