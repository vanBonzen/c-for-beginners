#include <stdbool.h>
#include <stdio.h>

int main() {
  int secretNumber = 7;
  int guess;
  int numberOfGuesses = 0;
  int maximumGuesses = 3;
  bool outOfGuesses = false;

  while (guess != secretNumber && !outOfGuesses) {
    if (numberOfGuesses < maximumGuesses) {
      printf("Enter a number: ");
      scanf("%d", &guess);
      numberOfGuesses++;
    } else {
      outOfGuesses = true;
    }
  }

  if (outOfGuesses) {
    printf("Out of guesses");
  } else {
    printf("You win!");
  }

  return 0;
}
