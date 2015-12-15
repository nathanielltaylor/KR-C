#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

main() {
  int c, nl, nw, nc, state;

  state = OUTSIDE;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
        ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
        state = OUTSIDE;
    else if (state == OUTSIDE) {
      state = INSIDE;
      ++nw;
    }
  }
  printf("This input has %d lines, %d words, and %d characters.\n", nl, nw, nc);
}
