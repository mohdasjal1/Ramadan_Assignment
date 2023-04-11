#include <stdio.h>

// C program to print a sequence of number starting with '28' and decremented by '3' until '1' !!

int main() {
   int i;

   for (i = 28; i >= 1; i -= 3) {
       printf("%d ", i);
   }

   return 0;
}
