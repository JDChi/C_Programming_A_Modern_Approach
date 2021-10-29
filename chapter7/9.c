#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minutes;
	char ch;
	printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minutes, &ch);

    if(ch == 'p' || ch == 'P'){
    	hour = 12 + hour;
    }

    printf("Equivalent 24-hour time: %d:%d\n", hour, minutes);
	return 0;
}