#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc == 1) {
    printf("User provided no filename");
    return 0;
  }
  FILE *fptr;

  fptr = fopen(argv[1], "r");

  if (!fptr) {
    printf("No file found");
    return 0;
  }

  char fileContent[100];
  while(fgets(fileContent, 100, fptr)) {
    printf("%s", fileContent);
  };


  fclose(fptr);
  return 0;
}
