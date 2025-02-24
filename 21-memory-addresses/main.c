#include <stdio.h>

int main() {

  int age = 50;
  double gpa = 4.2;
  char grade = 'A';

  printf("Age: %p\nGPA: %p\nGrade: %p\n", &age, &gpa, &grade);

  return 0;
}
