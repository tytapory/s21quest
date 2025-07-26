#include <stdio.h>

int main(void) {
  int symbol1 = ((('`' + 1) << 1) & 194) >> 1;
  int symbol2 = (('A' + 1) | 6) - 1 + 2;

  printf("%d%d", symbol1, symbol2);

  return 0;
}
