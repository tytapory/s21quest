#include <stdbool.h>
#include <stdio.h>

int factorial(int n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main(void) {
  int symbol1 = factorial(4) * 2 + 4;

  bool sieve[31] = {0};
  for (int i = 2; i <= 30; i++) {
    sieve[i] = true;
  }

  for (int i = 2; i * i <= 30; i++) {
    if (sieve[i]) {
      for (int j = i * i; j <= 30; j += i) {
        sieve[j] = false;
      }
    }
  }

  int primeCount = 0;
  int fourthPrime = 0;
  for (int i = 2; i <= 30; i++) {
    if (sieve[i]) {
      primeCount++;
      if (primeCount == 4) {
        fourthPrime = i;
        break;
      }
    }
  }

  int symbol2 = fourthPrime * 14 + 5;

  printf("%c%c", symbol2, symbol1);

  return 0;
}
