#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_VALUE 20
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");
  char arrays[MAX_VALUE];
  char ch;
  int index = 0;
  bool flag = true;
  while ((ch = getchar()) != '\n' && index < MAX_VALUE - 1) {
    ch = toupper(ch);
    if (ch >= 65 && ch <= 90) {
      arrays[index] = ch;
      index++;
    }
  }
  int last = index - 1;
  for (int i = 0; i <= index; i++) {
    if (last < i) {
      break;
    }

    if (arrays[i] != arrays[last]) {
      flag = false;
      break;
    }
    last--;
  }

  if (flag) {
    printf("Pailndrome\n");
  } else {
    printf("Not a Pailndrome\n");
  }

  return 0;
}