#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minutes, result_hour;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);
	if(hour > 12){
		result_hour = hour - 12;
	}else{
		result_hour = hour;
	}

	if(hour > 12){
		printf("Equivalen 12-hour time: %d:%02d PM\n", result_hour, minutes);
	}else {
		printf("Equivalen 12-hour time: %d:%02d AM\n", result_hour, minutes);
	}

	return 0;
}