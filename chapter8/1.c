#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	bool digit_seen[10] = {false};
	bool digit_duplicated[10] = {false};
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

	printf("Repeated digit(s): ");
	for(i = 0; i < (int) (sizeof(digit_duplicated) / sizeof(digit_duplicated[0])); i++){
		if(digit_duplicated[i]){
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}