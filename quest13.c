#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  char data;
  struct Node *next;
} Node;

int main(void) {
  Node *head = NULL;
  Node *current = NULL;

  for (char c = 'A'; c <= 'Z'; c++) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = c;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
      current = head;
    } else {
      current->next = newNode;
      current = newNode;
    }
  }

  Node *node = head;
  for (int i = 1; i < 10; i++) {
    node = node->next;
  }

  printf("%c%c", node->data, node->data);

  current = head;
  while (current != NULL) {
    Node *temp = current;
    current = current->next;
    free(temp);
  }

  return 0;
}
