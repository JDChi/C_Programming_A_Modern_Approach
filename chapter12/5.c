#include <stdio.h>

int main(int argc, char const *argv[]) {
  char chars[30], ch;
  char *p = chars;
  char *symbol;
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    *p = ch;
    p++;
    if (ch == '?' || ch == '.' || ch == '!') {
      symbol = p - 1;
      break;
    }
  }

  // 去掉休止符和标点符号
  char *character_end = p - 2;
  char *character_start = p - 2;
  while (character_start >= chars) {
    char *single_char;
    if (*character_start == ' ' || character_start == chars) {
      if (*character_start == ' ') {
        single_char = character_start + 1;
      } else if (character_start == chars) {
        single_char = character_start;
      }

      while (single_char <= character_end) {
        printf("%c", *single_char);
        single_char++;
      }
      if (*character_start == ' ') {
        printf(" ");
      }
      character_end = character_start - 1;
    }
    character_start--;
  }
  printf("%c\n", *symbol);

  return 0;
}
