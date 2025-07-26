#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *buffer = malloc(5);
  strcpy(buffer, "UlA=");

  for (int i = 0; buffer[i] != '\0'; i++) {
    buffer[i] = buffer[i] ^ 0x01;
    buffer[i] = buffer[i] + 1;
  }

  printf("%s", buffer);

  free(buffer);
  return 0;
}
