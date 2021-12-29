#include <stdio.h>
#include <string.h>

#include "readline.h"

#define MAX_REMIND 50
#define MSG_LEN 60

int main(int argc, char const *argv[]) {
  char reminders[MAX_REMIND][MSG_LEN + 1];
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;
  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    // 读入日期
    scanf("%2d", &day);
    if (day == 0) {
      break;
    }

    sprintf(day_str, "%2d", day);
    // 读入信息，包含时间
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++) {
      // 比较前面字符串的大小，就可以确定此时要插入的位置 i
      if (strcmp(day_str, reminders[i]) < 0) {
        break;
      }
    }

    // 将 i 后面的数据都往后移动一天
    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    // 将输入插入到指定的 i 位置
    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }

  return 0;
}
