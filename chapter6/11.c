#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	float result = 1;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
	   int bottom = 1;	
       for(int j = 1; j <= i; j++){
          bottom = bottom * j;
       }

       result = result + 1.0f / bottom;

	}
	printf("the result is %.10f\n", result);

	return 0;
}