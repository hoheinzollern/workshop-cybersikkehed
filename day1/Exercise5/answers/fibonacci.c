#include <stdio.h>
int main() {
   int n1=0;
   int n2=1;
   int i;
   for(i=2;i<10;i++)
   {
       int n3=n1+n2;
       n1=n2;
       n2=n3;
   }
   return n2;
}