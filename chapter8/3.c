#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	bool digit_seen[10] = {false};

	int digit, i;
	long n;

	printf("Enter a nubmer: ");
	scanf("%ld", &n);

	while(n > 0){
		digit = n % 10;
		if(!digit_seen[digit]){
			digit_seen[digit] = true;
		}else{
			digit_duplicated[digit] = true;
		}
		n /= 10;
		
	}


	printf("\n");
	return 0;
}