#include <stdio.h>

int main(int argc, char const *argv[])
{
	int top, bottom, top_temp, bottom_temp, divisor; 
	printf("Enter a fraction: ");
	scanf("%d/%d", &top, &bottom);

	top_temp = top;
	bottom_temp = bottom;

	while(bottom_temp != 0){
			int remainder = top_temp % bottom_temp;
			top_temp = bottom_temp;
			bottom_temp = remainder;			
		}
		divisor = top_temp;

	top = top / divisor;
	bottom = bottom / divisor;

	printf("In lowest terms: %d/%d\n", top, bottom);

	
	return 0;
}