#include <stdio.h>

int main() {

  FILE *fpointer = fopen("employees.txt", "w");
  fprintf(fpointer, "Alice, Business\nBob, Computer Science");
  fclose(fpointer);

  char line[255];
  FILE *fpointer2 = fopen("employees.txt", "r");
  fgets(line, 255, fpointer2);

  printf("%s", line);
  fclose(fpointer2);

  return 0;
}
