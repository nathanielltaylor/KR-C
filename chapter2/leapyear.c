#include <stdio.h>

int leap(int year);

int main() {
  int i;
  for (i = 1950; i <= 2050; ++i)
  if (leap(i))
    printf("%d is a leap year\n", i);
}

int leap(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return 1;
  else
    return 0;
}
