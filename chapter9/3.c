#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

// direction: 0: i - 1; 1: j+1; 2: i+1; 3: j-1
int main(int argc, char const *argv[]) {
  char walk[MAX_VALUE][MAX_VALUE];
  generate_random_walk(walk);

  print_array(walk);
  printf("\n");

  return 0;
}

void generate_random_walk(char walk[10][10]) {
  int i = 0, j = 0, direction;
  // 初始化二维数组
  for (i = 0; i < MAX_VALUE; i++) {
    for (j = 0; j < MAX_VALUE; j++) {
      walk[i][j] = '.';
    }
  }

  i = 0;
  j = 0;
  int currentChar = 65;
  walk[0][0] = currentChar;
  currentChar++;

  srand((unsigned)time(NULL));

  while (currentChar < 91) {
    // 判断是否 4 个方向被堵住
    if (walk[i - 1][j] != '.' && walk[i][j + 1] != '.' &&
        walk[i + 1][j] != '.' && walk[i][j - 1] != '.') {
      break;
    }

    direction = rand() % 4;

    // 判断是否超出边界
    if ((direction == 0 && i - 1 < 0) ||
        (direction == 1 && j + 1 >= MAX_VALUE) ||
        (direction == 2 && i + 1 >= MAX_VALUE) ||
        (direction == 3 && j - 1 < 0)) {
      continue;
    }

    if (direction == 0) {
      if (walk[i - 1][j] != '.') {
        continue;
      }
      i = i - 1;
    } else if (direction == 1) {
      if (walk[i][j + 1] != '.') {
        continue;
      }
      j = j + 1;
    } else if (direction == 2) {
      if (walk[i + 1][j] != '.') {
        continue;
      }
      i = i + 1;
    } else if (direction == 3) {
      if (walk[i][j - 1] != '.') {
        continue;
      }
      j = j - 1;
    }
    walk[i][j] = currentChar;
    currentChar++;
  }
}

void print_array(char walk[10][10]) {
  int i = 0, j = 0;
  for (i = 0; i < MAX_VALUE; i++) {
    for (j = 0; j < MAX_VALUE; j++) {
      if (j % (MAX_VALUE) == 0) {
        printf("\n");
      }
      printf("%c ", walk[i][j]);
    }
  }
}