#include <stdio.h>

/**
 * gcc 4.c -o reverse
 * reverse void and null
 */
int main(int argc, char const *argv[]) {
  for (int i = argc - 1; i > 0; i--) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}