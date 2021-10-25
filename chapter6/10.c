#include <stdio.h>

int main(int argc, char const *argv[])
{
	int month = -1, day = -1, year = -1;
	int earliest_month, earliest_day, earlist_year;

	while(1){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if(month == 0 && day == 0 && year == 0){
			break;
		}

		if(earlist_year == 0){
			earlist_year = year;
			earliest_month = month;
			earliest_day = day;
		}else{
			if(earlist_year > year){
				earlist_year = year;
				earliest_month = month;
				earliest_day = day;
			}else if(earlist_year == year){
				if(earliest_month > month){
					earlist_year = year;
					earliest_month = month;
					earliest_day = day;
				}else if(earliest_month == month){
					if(earliest_day > day){
						earlist_year = year;
						earliest_month = month;
						earliest_day = day;
					}
				}

			} 
			
		}

	}
	printf("%d/%d/%02d is the earliest date\n", earliest_month, earliest_day, earlist_year);
	

	return 0;
}