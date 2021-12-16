#include <stdio.h>

#define MAX_LENGTH 20
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");

  char arrays[MAX_LENGTH];
  char *p = &arrays[0];
  char ch;

  while ((ch = getchar()) != '\n') {
    *p = ch;
    p++;
  }
  p--;
  printf("Reversal is: ");
  // p 的地址在数组的范围内
  while (p >= &arrays[0]) {
    printf("%c", *p);
    p--;
  }

  printf("\n");
  return 0;
}