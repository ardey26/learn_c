#include <stdio.h>

#define ARR_SIZE 5

int main() {
  
  int arr[ARR_SIZE] = {2, 1212, 4, 5, 6};


  int* firstPtr;

  firstPtr = arr;

  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d\n", firstPtr[0]);
    firstPtr++;
  }
  
return 0;
}
