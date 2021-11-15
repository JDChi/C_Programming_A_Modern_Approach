#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
	int a[N], i;

	printf("Enter %d numbers: ", N);
	int a_length = (int)(sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < a_length; i++){
		scanf("%d", &a[i]);
	}

	printf("In reverse order:");
	for(i = a_length - 1; i >= 0; i--){
		printf(" %d", a[i]);
	}

	printf("\n");
	return 0;
}