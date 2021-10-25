#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, odd, square;
	printf("This program prints a table of squares.\n");
	printf("Enter nubmer of entries in table: ");
	scanf("%d", &n);

	i = 1;
	odd =  3;
	for(int i = 1, square = 1; i <= n; i++, odd += 2){
		printf("%10d%10d\n", i, square);		
		square += odd;
	}

	return 0;
}