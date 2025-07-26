#include <stdio.h>

int main(void) {
  char str[] = "<H";

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = 'Z' + 'A' - str[i];
    }
    str[i] = str[i] + 2;
  }

  printf("%s", str);

  return 0;
}
