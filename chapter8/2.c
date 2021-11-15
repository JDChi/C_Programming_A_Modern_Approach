#include <stdio.h>

int main(int argc, char const *argv[])
{
	int digit_seen[10] = {0};
	int digit, i, count;
	long n;

	printf("Enter a nubmer: ");
	scanf("%ld", &n);

	while(n > 0){
		digit = n % 10;
		count = digit_seen[digit];
		count++;
		digit_seen[digit] = count;
		n /= 10;	
	}

	printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t\n");
	printf("Occurrences:\t");
	for(i = 0; i < (int) (sizeof(digit_seen) / sizeof(digit_seen[0])); i++){
		printf("%d\t", digit_seen[i]);
	}

	printf("\n");
	return 0;
}