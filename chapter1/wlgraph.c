#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

main() {
  int i, j, max, c, nw, state;
  int words[20];

  for (i = 0; i < 20; ++i)
  words[i] = 0;

  state = OUTSIDE;
  nw = 0;
  while (((c = getchar()) != EOF) && nw <= 20) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUTSIDE;
    else if (state == OUTSIDE) {
      state = INSIDE;
      ++nw;
      ++words[nw];
    }
    else
      ++words[nw];
  }

  max = 0;
  j = i;
  for (i = 0; i <= nw; ++i) {
    if (words[i] > max)
      max = words[i];
  }

  while (max != 0) {
    for (i = 0; i <= nw; ++i) {
      if (words[i] < max)
        putchar(' ');
      else
        putchar('|');
      if (i == nw)
        putchar('\n');
    }
    --max;
  }
}
