#include <stdio.h>

int main(int argc, char const *argv[]) {
  char words[30][20];
  char ch;
  char symbol;
  int i = 0, j = 0, start;
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      words[i][j] = '\0';
      i++;
      j = 0;
    } else if (ch == '?' || ch == '.' || ch == '!') {
      symbol = ch;
      words[i][j] = '\0';
      break;
    } else {
      words[i][j] = ch;
      j++;
    }
  }

  for (int row = i; row >= 0; row--) {
    int col = 0;
    while (words[row][col] != '\0') {
      printf("%c", words[row][col]);
      col++;
    }
    if (row != 0) {
      printf(" ");
    }
  }
  printf("%c", symbol);
  printf("\n");

  return 0;
}