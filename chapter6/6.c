#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	for(int i=2; i * i <= number; i=i+2){
		printf("%d\n", i * i);
	}
}