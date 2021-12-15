#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(int argc, char const *argv[]) {
  int amount, last_amount;
  int count_20 = 0, count_10 = 0, count_5 = 0, count_1 = 0;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &count_20, &count_10, &count_5, &count_1);
  printf("$20 bill: %d\n", count_20);
  printf("$10 bill: %d\n", count_10);
  printf(" $5 bill: %d\n", count_5);
  printf(" $1 bill: %d\n", count_1);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  int last_amount;
  *twenties = dollars / 20;
  last_amount = dollars - 20 * *twenties;
  if (last_amount != 0) {
    *tens = last_amount / 10;
    last_amount = last_amount - 10 * *tens;
    if (last_amount != 0) {
      *fives = last_amount / 5;
      last_amount = last_amount - 5 * *fives;
      if (last_amount != 0) {
        *ones = last_amount / 1;
      }
    }
  }
}