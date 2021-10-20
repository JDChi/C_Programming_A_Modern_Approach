#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	int result = 3;
	if(number >=0 && number <= 9){
		result = 1;
	}else if(number >= 10 && number <= 99){
		result = 2;
	}

	printf("The number %d has %d digits\n", number, result);
	return 0;
}