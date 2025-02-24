#include <stdio.h>

void sayHi(char name[], int age) {
  printf("Hello %s, you are %d years old.\n", name, age);
}

int main() {

  sayHi("Alice", 25);

  return 0;
}
