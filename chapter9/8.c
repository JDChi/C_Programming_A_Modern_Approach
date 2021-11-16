#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(int argc, char const *argv[]) {
  int win_count = 0, lose_count = 0;
  srand((unsigned)time(NULL));
  while (true) {
    if (play_game()) {
      printf("You win!\n");
      win_count++;
    } else {
      printf("You lose!\n");
      lose_count++;
    }
    char resp;
    printf("Play again? ");
    scanf("%c", &resp);
    // 消费掉后面的字符，不是很理解为什么要这么处理
    getchar();
    if (tolower(resp) == 'y') {
      continue;
    } else {
      break;
    }
  }

  printf("Wins: %d  Losses: %d\n", win_count, lose_count);

  return 0;
}

// 调用一次是扔两个骰子，
int roll_dice(void) {
  int first = rand() % 6 + 1;
  int second = rand() % 6 + 1;
  int sum = first + second;
  printf("You rolled: %d\n", sum);
  return sum;
}

bool play_game(void) {
  int sum = roll_dice();
  if (sum == 7 || sum == 11) {
    return true;
  } else if (sum == 2 || sum == 3 || sum == 12) {
    return false;
  } else {
    printf("Your point is %d\n", sum);
    while (true) {
      int point = roll_dice();
      if (point == sum) {
        return true;
      } else if (point == 7) {
        return false;
      }
    }
  }
}
