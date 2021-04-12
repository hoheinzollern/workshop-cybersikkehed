#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void function() {
 printf("You have successfully called function()\n");
}

int main(int argc, char **argv) {
 char buffer[64];

 gets(buffer);
}