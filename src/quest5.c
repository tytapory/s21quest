#include <stdio.h>

int main(void) {
  int symbol1 = 8 * 8 + 9;

  int fib = 1, prev = 0, temp;
  for (int i = 1; i < 9; i++) {
    temp = fib + prev;
    prev = fib;
    fib = temp;
  }
  int symbol2 = fib + 36;

  printf("%d%d", symbol1, symbol2);

  return 0;
}
