#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_VALUE 20
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");
  char arrays[MAX_VALUE];
  char ch;
  // 数组名作为指针，也就是作为指向数组第一个元素的指针
  // 但不能用 arrays++ 来指向下一个元素
  // 要么将 arrays复制给一个指针变量，通过改变指针变量来实现 char *p = arrays
  // 或者 *(arrays + index) 来移动
  char *p = arrays;
  char *q = arrays;
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