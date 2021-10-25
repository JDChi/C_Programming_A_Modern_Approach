#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2, divisor;
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

		while(num2 != 0){
			int remainder = num1 % num2;
			num1 = num2;
			num2 = remainder;			
		}
		divisor = num1;
	
	printf("Greatest common divisor: %d\n", divisor);
	return 0;
}