#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {
  struct Student student1;

  student1.age = 33;
  student1.gpa = 4.3;

  strcpy(student1.name, "Alice");
  strcpy(student1.major, "Computer Science");

  struct Student student2;

  student2.age = 32;
  student2.gpa = 4.3;

  strcpy(student2.name, "Bob");
  strcpy(student2.major, "Business");

  printf("%s", student2.name);

  return 0;
}
