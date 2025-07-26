#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool sieve[100] = {0};
  for (int i = 2; i < 100; i++) {
    sieve[i] = true;
  }

  for (int i = 2; i * i < 100; i++) {
    if (sieve[i]) {
      for (int j = i * i; j < 100; j += i) {
        sieve[j] = false;
      }
    }
  }

  int count = 0;
  for (int i = 2; i < 100; i++) {
    if (sieve[i]) {
      count++;
    }
  }

  int result1 = count * 3 + 11;
  int result2 = 8 * 13;

  printf("%d%d", result1, result2);

  return 0;
}
