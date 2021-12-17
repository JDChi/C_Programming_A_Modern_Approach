#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int sum = 0, value;
  for (int i = 1; i < argc; i++) {
    value = atoi(argv[i]);
    sum = sum + value;
  }

  printf("Total: %d\n", sum);
  return 0;
}