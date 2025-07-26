#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int factorial = 1;
  for (int i = 1; i <= 7; i++) {
    factorial *= i;
  }

  int sum_digits = 0;
  int temp = factorial;
  while (temp > 0) {
    sum_digits += temp % 10;
    temp /= 10;
  }

  int result_a = sum_digits * 7 + 8;

  int fib_prev = 1, fib_curr = 1;
  for (int i = 3; i <= 11; i++) {
    int fib_next = fib_prev + fib_curr;
    fib_prev = fib_curr;
    fib_curr = fib_next;
  }

  int result_b = fib_curr - 4;

  char char_a = (char)result_a;
  char char_b = (char)result_b;

  char atbash_a = (char)(155 - (int)char_a);
  char atbash_b = (char)(155 - (int)char_b);

  char *ptr = malloc(sizeof(char) * 16);

  *(ptr + 0) = atbash_b;
  *(ptr + 1) = atbash_a + 32;
  *(ptr + 2) = '\0';

  printf("%s", ptr);

  free(ptr);
  return 0;
}
