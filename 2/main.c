#include <stdio.h>

int main () {
  int x = 1;
  char y = '2';
  float z = 3.0;
  printf("X: %d Y: %c Z: %f \n X SIZE X: %lu SIZE Y:%lu  SIZE Z:%lu", x, y, z, sizeof(x), sizeof(y), sizeof(z));

  return 0;
}
