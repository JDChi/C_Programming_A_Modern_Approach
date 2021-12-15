
#include <stdio.h>
#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

char digits[3][MAX_DIGITS * 4];
int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                       {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                       {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                       {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
                       {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

int main(int argc, char const *argv[]) {
  clear_digits_array();
  printf("Enter a number: ");
  char c;
  int position = 0;
  while ((c = getchar()) != '\n') {
    // 将字符转成数字
    int digit = c - '0';
    if (digit >= 0 && digit <= 9 && position < MAX_DIGITS * 4) {
      process_digit(digit, position);
      position = position + 4;
    }
  }
  print_digits_array();

  return 0;
}

void clear_digits_array(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  for (int i = 0; i < 3; i++) {
    for (int j = position; j < position + 4; j++) {
      if (i == 0 && j == position + 1 &&
          segments[digit][0] == 1) {  // 处理第一行
        digits[i][j] = '_';
      } else if (i == 1) {  // 处理第二行
        if (j == position && segments[digit][5] == 1) {
          digits[i][j] = '|';
        } else if (j == position + 1 && segments[digit][6] == 1) {
          digits[i][j] = '_';
        } else if (j == position + 2 && segments[digit][1] == 1) {
          digits[i][j] = '|';
        }
      } else if (i == 2) {  // 处理第三行
        if (j == position && segments[digit][4] == 1) {
          digits[i][j] = '|';
        } else if (j == position + 1 && segments[digit][3] == 1) {
          digits[i][j] = '_';
        } else if (j == position + 2 && segments[digit][2] == 1) {
          digits[i][j] = '|';
        }
      }
    }
  }
}

void print_digits_array(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}