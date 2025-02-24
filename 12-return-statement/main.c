#include <stdio.h>
// Prototyping
double cube(double number);

int main() {

  printf("Answer: %f", cube(3.0));

  return 0;
}

double cube(double number) {

  double result = number * number * number;

  return result;
}
