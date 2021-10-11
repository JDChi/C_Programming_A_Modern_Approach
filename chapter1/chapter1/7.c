#include <stdio.h>

int main(int argc, char const *argv[])
{
	float amount, last_amount;
	int  count_20, count_10, count_5, count_1; 
	printf("Enter a dollar amount: ");
	scanf("%f" , &amount);

	count_20 = amount / 20;
    last_amount = amount - 20 * count_20;
    if(last_amount != 0){
    	count_10 = last_amount / 10;
    	last_amount = last_amount - 10 * count_10;
    	if(last_amount != 0){
    		count_5 = last_amount / 5;
    		last_amount = last_amount - 5 * count_5;
    		if(last_amount != 0){
    			count_1 = last_amount / 1;
    		}
    	}
    }

    printf("$20 bill: %d\n", count_20);
    printf("$10 bill: %d\n", count_10);
    printf(" $5 bill: %d\n", count_5);
    printf(" $1 bill: %d\n", count_1);

	return 0;
}