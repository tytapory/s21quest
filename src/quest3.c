#include <stdio.h>

int main(void) {
  int symbol1_code = 11 * 11 - 45;
  char symbol1 = (char)symbol1_code;

  int triangular_11 = 11 * (11 + 1) / 2;
  int symbol2_code = triangular_11 + 9;
  char symbol2 = (char)symbol2_code;

  printf("%c%c", symbol1, symbol2);

  return 0;
}
