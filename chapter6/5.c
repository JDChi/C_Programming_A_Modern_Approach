#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, result, last;

	printf("Enter a nubmer: ");
	scanf("%d", &number);

    while(number != 0){
    	last = number % 10;
    	number = number / 10;

    	if(result == 0){
    		result = last;
    	}else {
    		result = result * 10 + last;
    	}
    }

    printf("The result is %d\n", result);

	return 0;
}