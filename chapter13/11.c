#include <stdio.h>

#define MSG_LEN 60

double compute_average_word_length(const char *sentence);

int main(int argc, char const *argv[]) {
  char sentence[MSG_LEN + 1];
  float result;
  printf("Enter a sentence: ");
  gets(sentence);
  result = compute_average_word_length(sentence);

  printf("Average word length: %.1f\n", result);
  return 0;
}

double compute_average_word_length(const char *sentence) {
  float space_count = 0, ch_count = 0;
  while (*sentence) {
    if (*sentence == ' ') {
      space_count++;
    } else {
      ch_count++;
    }
    sentence++;
  }
  return ch_count / (space_count + 1);
}