#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int main() {

  int sum = add(1, 2);
  printf("%i", sum);
  return 0;
}
