#include <stdio.h>

int main(int argc, char const *argv[])
{
	int first_month, first_day, first_year;
	int second_month, second_day, second_year;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &first_month, &first_day, &first_year);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &second_month, &second_day, &second_year);

	if(first_year < second_year){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);		
	}else if(first_year > second_year){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);	
	}else {
		if(first_month < second_month){
			printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);		
		}else if(first_month > second_month){
			printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);	
		}else {
			if(first_day < second_day){
				printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);		
			}else{
				printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);	
			}
		}
	}

	return 0;
}