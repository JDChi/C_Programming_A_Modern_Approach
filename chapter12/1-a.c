#include <stdio.h>

#define MAX_LENGTH 10
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");
  int index = 0;
  char arrays[MAX_LENGTH];
  char ch;

  //  MAX_LENGTH - 1 因为最后一位需要存结束符
  while ((ch = getchar()) != '\n' && index < MAX_LENGTH - 1) {
    arrays[index] = ch;
    index++;
  }

  printf("Reversal is: ");
  for (int i = index; i >= 0; i--) {
    printf("%c", arrays[i]);
  }
  printf("\n");
  return 0;
}