#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(int argc, char const *argv[]) {
  char reminders[MAX_REMIND][MSG_LEN + 1];
  char date_str[12], msg_str[MSG_LEN + 1];
  int month, day, i, j, num_remind = 0, hour, minutes;
  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%02d/%02d %02d:%02d", &month, &day, &hour, &minutes);

    if (day == 0 || month == 0) {
      break;
    }

    // 将日期写入字符串
    sprintf(date_str, "%02d/%02d %02d:%02d", month, day, hour, minutes);

    // 读入信息
    read_line(msg_str, MSG_LEN);

    if (day > 31 || day < 0) {
      printf("the day is invalid, it should between 1 to 31\n");
      continue;
    }

    for (i = 0; i < num_remind; i++) {
      if (strcmp(date_str, reminders[i]) < 0) {
        break;
      }
    }

    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    strcpy(reminders[i], date_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}