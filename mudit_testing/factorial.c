#include <stdio.h>

unsigned long long factorial(unsigned int i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int main() {
   int number = 10;
   printf("Factorial of %d is %llu\n", number, factorial(number));
   return 0;
}
