#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  bool *sieve = malloc(201 * sizeof(bool));

  for (int i = 0; i <= 200; i++) {
    sieve[i] = true;
  }
  sieve[0] = sieve[1] = false;

  for (int i = 2; i * i <= 200; i++) {
    if (sieve[i]) {
      for (int j = i * i; j <= 200; j += i) {
        sieve[j] = false;
      }
    }
  }

  int count = 0;
  int prime23 = 0;
  int primeIndex = 0;

  for (int i = 2; i <= 200; i++) {
    if (sieve[i]) {
      count++;
      primeIndex++;
      if (primeIndex == 23) {
        prime23 = i;
      }
    }
  }

  int code1 = count * 7 + 11;
  int code2 = prime23;

  printf("%c%c", code1 + 2, code2 + 2);

  free(sieve);
  return 0;
}
