#include <stdio.h>

int main(void) {
  int pos1 = 26 - 25;
  int pos2 = 7 + 16;

  int symbol1 = 'A' + pos1 - 1;
  int symbol2 = 'A' + pos2 - 1;

  printf("%c%c", symbol1, symbol2);

  return 0;
}
