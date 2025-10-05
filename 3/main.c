#include <stdio.h>

int main() {
  int num1;
  int num2;
  int sum;

  printf("Number 1: ");
  scanf("%d", &num1);

  printf("\nNumber 2: ");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("%i", sum);

  return 0;
}
