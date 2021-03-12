#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int func()
{
    char buffer[64];
    gets(buffer);
}

int main(int argc, char **argv)
{
    func();
}