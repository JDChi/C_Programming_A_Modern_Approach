#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a1, a2, b1, b2, sum_a, sum_b;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &a1, &b1, &a2, &b2);
	sum_a = a1 * b2 + a2 * b1;
	sum_b = b1 * b2;
	printf("The sum is %d/%d\n", sum_a, sum_b);
	return 0;
}