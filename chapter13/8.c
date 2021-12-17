#include <ctype.h>
#include <stdio.h>

#define MSG_LEN 60

int compute_scrabble_value(const char *word);
int read_line(char str[], int n);

int main(int argc, char const *argv[]) {
  char msg_str[MSG_LEN + 1];
  printf("Enter a word: ");
  read_line(msg_str, MSG_LEN);
  int result = compute_scrabble_value(msg_str);
  printf("Scrabble value: %d\n", result);
  return 0;
}

int compute_scrabble_value(const char *word) {
  int result = 0;
  while (*word) {
    char ch = toupper(*word);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' ||
        ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U') {
      result = result + 1;
    } else if (ch == 'D' || ch == 'G') {
      result = result + 2;
    } else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') {
      result = result + 3;
    } else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y') {
      result = result + 4;
    } else if (ch == 'K') {
      result = result + 5;
    } else if (ch == 'J' || ch == 'X') {
      result = result + 8;
    } else if (ch == 'Q' || ch == 'Z') {
      result = result + 10;
    }
    word++;
  }
  return result;
}

int read_line(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}