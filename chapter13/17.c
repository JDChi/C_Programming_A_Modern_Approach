#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_VALUE 20

bool is_palindrome(const char *message);
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");
  char message[MAX_VALUE];
  int index = 0;
  char ch;

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (ch >= 65 && ch <= 90) {
      message[index] = ch;
      index++;
    }
  }

  bool result = is_palindrome(message);
  if (result) {
    printf("Pailndrome\n");
  } else {
    printf("Not a Pailndrome\n");
  }

  return 0;
}

bool is_palindrome(const char *message) {
  char *head = (char *)message, *tail = (char *)message;
  while (*tail) {
    tail++;
  }
  tail--;
  while (head <= tail) {
    if (*head != *tail) {
      return false;
    }
    head++;
    tail--;
  }
  return true;
}