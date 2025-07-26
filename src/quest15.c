#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  char data;
  struct Node *next;
} Node;

long long mod_pow(long long base, long long exp, long long mod) {
  if (exp == 0) return 1;
  if (exp % 2 == 0) {
    long long half = mod_pow(base, exp / 2, mod);
    return (half * half) % mod;
  }
  return (base * mod_pow(base, exp - 1, mod)) % mod;
}

bool miller_rabin(long long n) {
  if (n < 2) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0) return false;

  long long r = 0;
  long long d = n - 1;
  while ((d & 1) == 0) {
    d >>= 1;
    r++;
  }

  long long a = 2;
  long long x = mod_pow(a, d, n);
  if (x == 1 || x == n - 1) return true;

  for (long long i = 0; i < r - 1; i++) {
    x = (x * x) % n;
    if (x == n - 1) return true;
  }
  return false;
}

Node *create_list_recursive(char c) {
  if (c > 'Z') return NULL;

  Node *node = malloc(sizeof(Node));
  node->data = c;
  node->next = create_list_recursive(c + 1);
  return node;
}

Node *get_nth_node_recursive(Node *head, int n) {
  if (n == 1 || head == NULL) return head;
  return get_nth_node_recursive(head->next, n - 1);
}

void print_binary(int value) {
  for (int i = 7; i >= 0; i--) {
    int bit = (value >> i) & 1;
    putchar('0' + bit);
  }
}

int main(void) {
  Node *head = create_list_recursive('A');

  Node *tenth = get_nth_node_recursive(head, 10);

  int char_value = tenth->data;
  int processed = (char_value ^ 0x55) | 0x02;

  if (miller_rabin(processed)) {
    processed += 1;
  }

  print_binary(processed);
  printf(" ");
  print_binary(processed);

  return 0;
}
