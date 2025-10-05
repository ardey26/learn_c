#include <stdio.h>

int main() {
  int i = 1;
  while (i <= 100) {
   

    if (i % 5 == 0 && i % 3 == 0) {
      printf("%i: FizzBuzz\n", i);
    }

    else if (i % 3 == 0) {
      printf("%i: Fizz\n", i);
    }    

    else if (i % 5 == 0) {
      printf("%i: Buzz\n", i);
    }


    i++;
  }
  return 0;
}
