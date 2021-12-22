#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void revere_name(char *name);

int main(int argc, char const *argv[]) {
  char first, last, ch;
  char name[50] = {" "};
  printf("Enter a first and last name: ");
  gets(name);
  revere_name(name);
  printf("%s\n", name);
  return 0;
}
void revere_name(char *name) {
  char first[20] = {" "}, last[20] = {" "};

  // 两个指针，一个记录当前字符，一个记录上一个字符
  char *copy_name = name, *copy_before_name;
  int first_index = 0, last_index = 0;
  bool is_first = true, is_last = false;
  while (*copy_name) {
    copy_before_name = copy_name - 1;
    // 空格和前面的一个字符是字母，就认为读完了名字
    if (is_first && *copy_name == ' ' && isalpha(*copy_before_name)) {
      is_first = false;
      is_last = true;
    }

    if (is_first && isalpha(*copy_name)) {  // 写入名字
      first[first_index] = *copy_name;
      first_index++;

    } else if (is_last && isalpha(*copy_name)) {  // 写入姓
      last[last_index] = *copy_name;
      last_index++;
    }
    copy_name++;
  }
  char *last_p = last;

  while (*last_p) {
    if (*last_p != '\0') {
      *name = *last_p;
    }
    // printf("name is %c\n", *name);
    last_p++;
    name++;
  }
  *name = ' ';
  name++;
  *name = ',';
  name++;

  *name = first[0];
  name++;
  *name = '.';
  name++;
  *name = '\0';
}