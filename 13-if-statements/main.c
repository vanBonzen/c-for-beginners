#include <stdio.h>

int max(int number1, int number2);
int maxOfThree(int number1, int number2, int number3);

int main() {

  printf("The bigger number of 5 and 3 is: %d\n", max(5, 3));
  printf("The bigger number of 5, 6 and 13 is: %d\n", maxOfThree(5, 6, 13));

  return 0;
}

int max(int number1, int number2) {

  int result;

  if (number1 > number2) {
    result = number1;
  } else if (number2 > number1) {
    result = number2;
  } else {
    result = 0;
  }

  return result;
}

int maxOfThree(int number1, int number2, int number3) {

  int result;

  if (number1 >= number2 && number1 >= number3) {
    result = number1;
  } else if (number2 >= number1 && number2 >= number3) {
    result = number2;
  } else {
    result = number3;
  }

  return result;
}
