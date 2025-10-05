#include <stdio.h>
#include "calc.h"

int main() {
  float x0 = add(1, 2);
  float x1 = subtract(2, 1);
  float x2 = multiply(2, 2);
  float x3 = divide(3, 1.5);
  


  printf("%f %f %f %f", x0, x1, x2, x3);
return 0;
}
