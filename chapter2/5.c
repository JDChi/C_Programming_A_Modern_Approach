#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x;
	printf("Please input a number : ");
	scanf("%f" , &x);
	printf("the result is : %.0f\n" , 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x -6);
	return 0;
}