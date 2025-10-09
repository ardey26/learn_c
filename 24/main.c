#include <stdio.h>

int add(int x, int y) {
  return x + y;
};

int subtract(int x, int y) {
    return x - y;
};

int main() {
  int (*fptr)(int, int);

  fptr = &add;
  printf("%d\n", fptr(1, 2));

  fptr = &subtract;
  printf("%d\n", fptr(4, 1));
  return 0;
}
