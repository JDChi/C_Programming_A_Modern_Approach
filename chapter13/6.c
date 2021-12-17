#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compare(const char* argv, const char* planets);

#define NUM_PLANETS 9
int main(int argc, char const* argv[]) {
  char* planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (compare(argv[i], planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }
  return 0;
}

int compare(const char* argv, const char* planets) {
  int result = 0;
  while (*planets != '\0') {
    char p1 = tolower(*planets);
    char p2 = tolower(*argv);
    if (p1 != p2) {
      result = -1;
      break;
    }
    planets++;
    argv++;
  }

  return result;
}