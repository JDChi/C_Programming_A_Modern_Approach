#include <stdio.h>

void encrypt(char *message, int shift);

int main(int argc, char const *argv[]) {
  char message[80];

  printf("Enter message to be encrypted: ");
  gets(message);

  int amount;
  printf("Enter shift amount (1-25): ");
  scanf("%d", &amount);

  printf("Encrypted message: ");
  encrypt(message, amount);
  printf("\n");
  return 0;
}

void encrypt(char *message, int shift) {
  while (*message) {
    if (*message >= 'A' && *message <= 'Z') {
      *message = ((*message - 'A') + shift) % 26 + 'A';
    } else if (*message >= 'a' && *message <= 'z') {
      *message = ((*message - 'a') + shift) % 26 + 'a';
    }

    printf("%c", *message);
    message++;
  }
}