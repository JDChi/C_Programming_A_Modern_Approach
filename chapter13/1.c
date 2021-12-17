#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
int main(int argc, char const *argv[]) {
  char words[MAX_LENGTH + 1], smallest_word[MAX_LENGTH + 1],
      largest_word[MAX_LENGTH + 1];

  printf("Enter word: ");

  while (true) {
    gets(words);

    if (strlen(smallest_word) == 0) {
      strcpy(smallest_word, words);
    }
    if (strlen(largest_word) == 0) {
      strcpy(largest_word, words);
    }

    if (strlen(smallest_word) != 0 && strlen(largest_word) != 0) {
      if (strcmp(words, largest_word) > 0) {
        strcpy(largest_word, words);
      } else if (strcmp(words, smallest_word) < 0) {
        strcpy(smallest_word, words);
      }
      if (strlen(words) == 4) {
        break;
      }
    }

    printf("Enter word: ");
  }

  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

  return 0;
}