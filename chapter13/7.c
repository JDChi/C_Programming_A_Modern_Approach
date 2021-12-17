#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;
  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  char *singles[] = {"\n",        "-one\n",      "-two\n",     "-three\n",
                     "-four\n",   "-five\n",     "-six\n",     "-seven\n",
                     "-eight\n",  "-nine\n",     "ten\n",      "eleven\n",
                     "twelve\n",  "thirdteen\n", "fourteen\n", "fifteen\n",
                     "sixteen\n", "seventeen\n", "eighteen\n", "nighteen\n"};
  char *tens[] = {" ",     " ",     "twenty",  "thirdty", "fourty",
                  "fifty", "sixty", "seventy", "eighty",  "nighty"};

  int single = number % 10;
  int ten = number / 10;

  printf("You enter the number ");
  if (number < 20) {
    printf("%s", singles[number]);
  } else {
    printf("%s", tens[ten]);
    printf("%s", singles[single]);
  }

  return 0;
}