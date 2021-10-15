#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int first, second;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	first = number % 10;
    second = number / 10;

    printf("The reversal is: %d\n", first * 10 + second);

	return 0;
}