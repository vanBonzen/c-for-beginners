#include <stdio.h>

int main() {
  int i = 0;

  while (i < 5) {
    printf("%d\n", i);
    i++;
  }

  int i2;

  for (i2 = 0; i2 < 5; i2++) {
    printf("%d\n", i2);
  }
  int luckyNumbers[6] = {4, 8, 15, 16, 23, 42};

  for (int i3 = 0; i3 < 6; i3++) {
    printf("%d\n", luckyNumbers[i3]);
  }
  return 0;
}
