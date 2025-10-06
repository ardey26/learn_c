#include <stdio.h>

#define ARR_SIZE 2

typedef struct {
    int x;
    int y;
} Pointer;

int main() {
  Pointer pointerArr[ARR_SIZE];

  pointerArr[0].x = 1;
  pointerArr[0].y = 2;

  pointerArr[1].x = 3;
  pointerArr[1].y = 4;

  Pointer* ptr = pointerArr;

  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d %d\n", ptr[0].x, ptr[0].y);
    ptr++;
  }
return 0;
}
