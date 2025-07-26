#include <stdio.h>
#include <stdlib.h>

// я абсолютно без понятия что значит for != char[]
int main(void) {
  char *ptr = malloc(sizeof(char) * 2);
  char arr[] = {0, 0};

  inline int calculate() { return (1 << 4) | (1 << 1) | (1 << 0); }

  for (int i = 0; i < 1; i++) {
    *(ptr + i) = calculate();
    arr[i] = *(ptr + i);
  }

  printf("%d", arr[0]);

  free(ptr);
  return 0;
}
