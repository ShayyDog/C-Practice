#include <stdio.h>

int main(void) {
  int i;

  printf("P6 500 500 255\n");

  for (i = 0; i < 500 * 500; i++) {
    printf("%c%c%c", 107, 23, 44);
  }
  return 0;
}
