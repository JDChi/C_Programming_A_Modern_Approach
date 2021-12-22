#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool are_anargrams(const char *word1, const char *word2);

int main(int argc, char const *argv[]) {
  char word1[30], word2[30];

  printf("Enter first word: ");
  gets(word1);

  printf("Enter second word: ");
  gets(word2);

  if (are_anargrams(word1, word2)) {
    printf("Ther words are anagrams.\n");
  } else {
    printf("Ther words are not anagrams.\n");
  }

  return 0;
}

bool are_anargrams(const char *word1, const char *word2) {
  int chars[26] = {0};
  int count, index;
  while (*word1) {
    if (isalpha(*word1)) {
      index = tolower(*word1) - 'a';
      count = chars[index];
      count++;
      chars[index] = count;
    }
    word1++;
  }

  while (*word2) {
    if (isalpha(*word2)) {
      index = tolower(*word2) - 'a';
      count = chars[index];
      count--;
      chars[index] = count;
    }
    word2++;
  }

  for (int i = 0; i < 26; i++) {
    if (chars[i] != 0) {
      return false;
    }
  }
  return true;
}