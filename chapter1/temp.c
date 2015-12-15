#include <stdio.h>

main() {
  printf("%3s %3s\n", "Celsius", "Fahrenheit");
  float fahrenheit, celsius;
  int low, high, increment;

  low = 0;
  high = 288;
  increment = 18;

  celsius = low;
  while (celsius <= high) {
      fahrenheit = (celsius * 1.8) + 32.0;
      printf("%3.0f %9.1f\n", celsius, fahrenheit );
      celsius += increment;
  }
}
