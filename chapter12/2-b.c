#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_VALUE 20
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");
  char arrays[MAX_VALUE];
  char ch;
  char *p = &arrays[0];
  char *q = &arrays[0];
  bool flag = true;

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (ch >= 65 && ch <= 90) {
      *p = ch;
      // 因为指针是指向地址，由于数组是连续的内存地址，所以可以用自增来表示下一个
      p++;
    }
  }

  // 此时的 p 指向结束符，所以往后退一步
  p--;
  while (flag) {
    if (p < q) {
      break;
    }
    if (*p != *q) {
      flag = false;
    }

    p--;
    q++;
  }

  if (flag) {
    printf("Pailndrome\n");
  } else {
    printf("Not a Pailndrome\n");
  }

  return 0;
}