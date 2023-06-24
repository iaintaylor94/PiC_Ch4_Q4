#include <stdio.h>

int main(void) {

  double fahrenheit = 27.0;
  double celcius;

  celcius = (fahrenheit - 32) / 1.8;

  printf ("%f degrees Fahrenheit is %f degrees Celcius\n", fahrenheit, celcius);
  
  return 0;
}