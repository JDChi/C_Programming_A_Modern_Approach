#include <ctype.h>
#include <stdio.h>

#define MSG_LEN 60

int compute_vowel_count(const char* sentence);
int read_line(char str[], int n);

int main(int argc, char const* argv[]) {
  char sentence[MSG_LEN + 1];
  int result;
  printf("Enter a sentence: ");
  read_line(sentence, MSG_LEN);
  result = compute_vowel_count(sentence);
  printf("Your sentence contains %d vowels\n", result);
  return 0;
}
int compute_vowel_count(const char* sentence) {
  int count = 0;
  char ch;
  while (*sentence) {
    ch = toupper(*sentence);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      count++;
    }
    sentence++;
  }
  return count;
}

int read_line(char str[], int n) {
  char ch;
  int i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}