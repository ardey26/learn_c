#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Please provide filename\n");
    return 0;
  }

  FILE *fptr;

  fptr = fopen(argv[1], "r");
  
  char fileContent[300];
  int counter=0;
  while(fgets(fileContent, 300, fptr)) {
    counter++;
  }

  printf("%d\n", counter);
  
  
return 0;
}
