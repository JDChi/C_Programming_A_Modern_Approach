#include <stdio.h>

#define MAX_LENGTH 20

void reverse(char *message);
int main(int argc, char const *argv[]) {
  char message[80];
  printf("Enter a message: ");
  gets(message);
  reverse(message);
  printf("Reversal is: %s", message);

  printf("\n");
  return 0;
}

void reverse(char *message) {
  char *head = message, *tail = message;
  char head_char, tail_char;
  while (*tail) {
    tail++;
  }
  tail--;
  while (head <= tail) {
    tail_char = *tail;
    head_char = *head;
    *head = tail_char;
    *tail = head_char;

    head++;
    tail--;
  }
}