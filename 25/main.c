#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1 = malloc(sizeof(int[10]));

  if (p1) {
    for (int i = 0; i<10; i++) {
      p1[i] = i;
    }

    for (int i = 0; i < 10; i++) {
      printf("%d", p1[i]);
    }

    free(p1);
  }
return 0;
}
