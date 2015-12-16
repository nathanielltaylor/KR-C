#include <stdio.h>

int to_celsius(int fahr);

int main() {
  int fahr;

  for (fahr = 300; fahr >= 0; fahr -= 20)
      printf("Fahrenheit: %d \t Celsius: %d \n", fahr, to_celsius(fahr));
  return 0;
}

int to_celsius(int fahr) {
  return (5.0/9.0)*(fahr-32);
}
