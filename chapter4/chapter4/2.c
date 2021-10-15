#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int first, second, third;
	printf("Enter a three-digit number: ");
	scanf("%d", &number);

	first = number % 10;
    second = number /10 % 10;
    third = number / 100;

    printf("The reversal is: %d\n", first * 100 + second * 10 + third);

	return 0;
}