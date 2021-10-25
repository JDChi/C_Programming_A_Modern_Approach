#include <stdio.h>

int main(int argc, char const *argv[])
{
	float max = -1;
    float num;

    for(;;){
    	printf("Enter a number: ");
    	scanf("%f", &num);
    	if(num <= 0){
           printf("The largest nubmer entered was %f\n", max);
           break;
    	}else {
    		if(max < num){
    			max = num;
    		}
    	}
    }

	return 0;
}