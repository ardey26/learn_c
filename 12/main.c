#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("./12/test.txt", "w");
  fprintf(fptr, "Hello, file!");
  fclose(fptr);
  return 0;
}
