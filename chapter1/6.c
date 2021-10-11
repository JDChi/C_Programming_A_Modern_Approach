#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x;
	printf("Please input a number : ");
	scanf("%f" , &x);
	printf("the result is : %.0f\n" , (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6));
	return 0;
}