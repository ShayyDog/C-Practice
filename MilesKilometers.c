#import <stdio.h>

int main(void) {
  double miles;
  double kilometers;

  //Get miles input from user
  printf("Enter miles: ");
  scanf("%lf", &miles);

  kilometers = miles * 1.61;

  printf("\n%.2lf miles is equal to ", miles);
  printf("%.2lf kilometers.\n\n", kilometers);

  return 0;

}
