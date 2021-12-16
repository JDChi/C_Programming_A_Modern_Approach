#include <stdio.h>

#define MAX_LENGTH 20
int main(int argc, char const *argv[]) {
  printf("Enter a message: ");

  char arrays[MAX_LENGTH];
  // 数组名作为指针，也就是作为指向数组第一个元素的指针
  // 但不能用 arrays++ 来指向下一个元素
  // 要么将 arrays复制给一个指针变量，通过改变指针变量来实现 char *p = arrays
  // 或者 *(arrays + index) 来移动

  char ch;
  int index = 0;

  while ((ch = getchar()) != '\n') {
    *(arrays + index) = ch;
    index++;
  }
  index--;
  printf("Reversal is: ");
  // p 的地址在数组的范围内
  while (index >= 0) {
    printf("%c", *(arrays + index));
    index--;
  }

  printf("\n");
  return 0;
}