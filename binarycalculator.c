#include <stdio.h>

int main(void) {
  double userNum;
  int intNum;
  int sizeBinary;

  while ( !feof (stdin)) {
    printf("Please enter a positive whole number: ");
    scanf(" %lf", &userNum);

    if (userNum - (int)userNum != 0 || userNum <= 0) {
      printf("Sorry, that is not a positive whole number.\n");
      continue;
    }

    intNum = (int)userNum;
    int binary[intNum];

    int i = 0;

    while (intNum > 0) {
      binary[i] = intNum % 2;
      intNum = intNum / 2;
      i++;
    }

    int j = 0;
    printf("%d (base-10) is equivalent to ", (int)userNum);
    for (j = i - 1; j >= 0; j--) {
      printf("%d", binary[j]);
    }
    printf(" (base-2).\n");
  }

  return 0;
}
