#include <stdio.h>

main() {
  int c, counter;

  /* combination concepts in 1-8 and 1-10 */

  counter = 0;
  while ((c = getchar()) != EOF) {
      if (c == ' ' || c == '\n' || c == '\t')
          counter += 1;
      if (c == '\\') {
          putchar('\\');
          putchar('\\');
      }
      else if (c == '\b') {
          putchar('\\');
          putchar('b');
      }
      else if (c == '\t') {
          putchar('\\');
          putchar('t');
      }
      else
          putchar(c);
  }
  printf("%d \n", counter);
}
