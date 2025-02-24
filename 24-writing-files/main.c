#include <stdio.h>

int main() {

  FILE *fpointer = fopen("employees.txt", "w");
  fprintf(fpointer, "Alice, Business\nBob, Computer Science\nLeo, Dog");
  fclose(fpointer);

  FILE *fpointer2 = fopen("employees.txt", "a");
  fprintf(fpointer, "\nPengu, Penguin");
  fclose(fpointer);

  return 0;
}
