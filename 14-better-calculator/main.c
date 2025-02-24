#include <stdio.h>

int main() {

  double number1;
  double number2;

  char op;

  printf("Enter a number: ");
  scanf("%lf", &number1);

  printf("Enter operator: ");
  scanf(" %c", &op);

  printf("Enter a secound number: ");
  scanf("%lf", &number2);

  if (op == '+') {
    printf("%f", number1 + number2);
  } else if (op == '-') {
    printf("%f", number1 - number2);
  } else if (op == '*') {
    printf("%f", number1 * number2);
  } else if (op == '/') {
    printf("%f", number1 / number2);
  } else {
    printf("Invalid operator");
  }

  return 0;
}
