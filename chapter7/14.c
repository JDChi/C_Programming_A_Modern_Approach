#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double num, y = 1, last_y;
	printf("Enter a positive number: ");
	scanf("%lf", &num);

    while(1){
    	last_y = y;
    	y = (y + num / y) / 2;
    	if(fabs(y - last_y) < 0.00001 * y){
    		break;
    	}

    }
    printf("Square root: %lf\n", y);


	return 0;
}