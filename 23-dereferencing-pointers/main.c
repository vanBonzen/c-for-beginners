#include <stdio.h>

int main() {

  int age = 60;
  int *pAge = &age;

  printf("%d", *pAge);

  return 0;
}
