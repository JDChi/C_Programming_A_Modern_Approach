#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);
int main(int argc, char const *argv[]) {
  int numerator, denominator, reduced_numerator, reduced_denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
  int divisor, numerator_temp, denominator_temp;
  numerator_temp = numerator;
  denominator_temp = denominator;
  while (denominator_temp != 0) {
    int remainder = numerator_temp % denominator_temp;
    numerator_temp = denominator_temp;
    denominator_temp = remainder;
  }
  divisor = numerator_temp;

  // 分子分母都除以最大公约数
  *reduced_numerator = numerator / divisor;
  *reduced_denominator = denominator / divisor;
}