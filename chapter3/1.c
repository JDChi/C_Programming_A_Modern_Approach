#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year, month, day;
	printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d" , &day, &month, &year);

    // %02d 表示不足两位用0补齐
    printf("You entered the date %d%02d%02d \n", year, month, day);
	return 0;
}