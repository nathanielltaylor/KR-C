#include <stdio.h>

main() {
  printf("%s %s\n", "Fahrenheit", "Celsius");
  int fahr;

  for (fahr = 300; fahr >= 0; fahr -= 20)
      printf("%3d %8.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
