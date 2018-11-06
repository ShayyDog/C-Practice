
int main(void) {

//variables for farenheit and celcius
double far = 0.0;
double cel = 0.0;
char input;

printf("Are you converting from fahrenheit or celcius (Type f or c): ");
scanf("%c", &input);

if (input == 'f') {
  printf("What is the temperature in fahrenheit? ");
  scanf("%lf", &far);
  cel = (far - 32) * (5 / 9);
  printf("%.0lf degrees fahrenheit is equal to %.2lf degrees celcius.\n", far, cel);
}
else if (input == 'c') {
  printf("What is the temperature in celcius? ");
  scanf("%lf", &cel);
  far = (cel * (9 / 5)) + 32;
  printf("%.0lf degrees celcius is equal to %.2lf degrees fahrenheit.\n", cel, far);
}
else {
  printf("Incorrect input.\n");
}


return 0;
}
