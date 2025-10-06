#include <stdio.h>

int main() {
  int x=0;

  int* x_ptr = &x;

  printf("Value: %d\n", x);
  printf("Address: %p\n", x_ptr);
  
  *x_ptr += 10;

  printf("Value: %d\n", x);
  printf("Address: %p\n", x_ptr);

 

return 0;
}
