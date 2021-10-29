#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, temp_num;
	double result = 1;
	printf("Enter a positive integer: ");
    scanf("%d", &num);
    temp_num = num;
    while(temp_num > 1){
    	result = result * temp_num;
    	temp_num--;
    }

    // int 13
    // short 7
    // long
    // long long
    // float 34
    // double
    // long double
    printf("Factorial of %d: %f\n",num, result);
	return 0;
}