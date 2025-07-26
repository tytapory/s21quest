#include <stdio.h>

int main(void) {
  int W = ('B' << 8) | 'u';

  printf("%04X", W);

  return 0;
}
