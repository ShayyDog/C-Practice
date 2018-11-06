#include <stdio.h>

int main(void) {
  int height;
  int width;
  int i;
  int countryCode;

  //Prompt user for which flag to print
  fprintf(stderr, "What country's flag would you like to print? ");
  scanf(" %d", &countryCode);

  //Check to make sure input is valid
  while (countryCode < 1 || countryCode > 3) {
    fprintf(stderr, "Invalid input\n");
    fprintf(stderr, "What country's flag would you like to print? ");
    scanf(" %d", &countryCode);
  }

  //Ask user for width of the image they would like to create
  fprintf(stderr, "What width (in pixels) do you want it to be? ");
  scanf(" %d", &width);

  //Check to make sure input is valid
  while (width <= 0) {
    fprintf(stderr, "Invalid input\n");
    fprintf(stderr, "What width (in pixels) do you want it to be? ");
    scanf(" %d", &width);
  }

  //Find the height given the ratio for flags
  height = width / 1.5;

  fprintf(stderr, "Creating flag for Country %d.\n", countryCode);

  //Polish flag
  if (countryCode == 1) {
    printf("P6\n %d %d 255\n", width, height); //PPM header
    for (i = 0; i < width * height; i++) {
        if (i < width * (height / 2)) { //Top half
          printf("%c%c%c", 255, 255, 255); //White
        }
        if (i >= width * (height / 2)) { //Bottom half
          printf("%c%c%c", 220, 20, 60); //Crimson
        }
    }
  }

  //Netherlands flag
  if (countryCode == 2) {
    printf("P6\n %d %d 255\n", width, height); //PPM header
    for (i = 0; i < width * height; i++) {
      if (i % width < (width / 3)) { //First vertical third
        printf("%c%c%c", 174, 28, 40); //Red
      }
      if (i % width >= (width / 3) && i % width < width - (width / 3)) { //Middle third
        printf("%c%c%c", 255, 255, 255); //White
      }
      if (i % width >= width - (width / 3)) { //Final third
        printf("%c%c%c", 33, 70, 139); //Blue
      }
    }
  }

  //Italian flag
  if (countryCode == 3) {
    printf("P6\n %d %d 255\n", width, height); //PPM header
    for (i = 0; i < width * height; i++) {
      if (i % width < (width / 3)) {
        printf("%c%c%c", 0, 146, 70);
      }
      if (i % width >= (width / 3) && i % width < width - (width / 3)) {
        printf("%c%c%c", 255, 255, 255);
      }
      if (i % width >= width - (width / 3)) {
        printf("%c%c%c", 206, 43, 55);
      }
    }
  }

  fprintf(stderr, "Done!\n");

  return 0;
}
