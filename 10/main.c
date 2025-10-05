#include <stdio.h>

#define PI 3.141592653
int main() {
  #ifdef PI // Only runs if the PI macro is defined
    printf("PI: %f", PI);
  #endif

  printf("That's all!");
return 0;
}
