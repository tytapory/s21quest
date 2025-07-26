#include <stdio.h>

int main(void) {
  int symbol1_code = 8 * 8 + 10;
  char symbol1 = (char)symbol1_code;

  int triangular_14 = 14 * (14 + 1) / 2;
  int symbol2_code = triangular_14 + 3;
  char symbol2 = (char)symbol2_code;

  for (int i = 7; i >= 0; i--) {
    printf("%d", (symbol1 >> i) & 1);
  }

  for (int i = 7; i >= 0; i--) {
    printf("%d", (symbol2 >> i) & 1);
  }

  return 0;
}
