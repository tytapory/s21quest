#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr = malloc(sizeof(int));

  inline int fib(int n) {
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
      if (i == 5)
        break;
    }
    for (int i = 6; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return b;
  }

  union {
    int i;
    char c;
  } u1, u2;

  u1.i = fib(10) + 34;

  int count = 0, num = 2;
  while (count < 7) {
    int is_prime = 1;
    for (int i = 2; i * i <= num; i++) {
      if (num % i != 0)
        continue;
      is_prime = 0;
      break;
    }
    if (is_prime) {
      count++;
      if (count == 7) {
        u2.i = num * 3 + 2;
        goto output;
      }
    }
    num++;
  }

output:
  if (u1.i != u2.i)
    printf("%c%c", u1.c, u2.c);

  free(ptr);
  return 0;
}
