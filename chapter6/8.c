#include <stdio.h>

int main(int argc, char const *argv[])
{
	int starting_day, total_days;
	printf("Enter number of days in month: ");
	scanf("%d", &total_days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);

    int difference = starting_day - 1;
	for(int i = 1; i <= 42; i++){
		 if(i - difference > total_days){
		 	printf("\n");
	    	break;
	    }
	    
		if(i < starting_day){
			printf("\t");
		}else {
            printf("%2d\t", i - difference);
		}
		
	    if(i % 7 == 0){
	    	printf("\n");
	    }

		        
	}
	
	return 0;
}