#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Enter phone number: ");
	char ch;
	while((ch = getchar()) != '\n'){
		if(ch == 'A' || ch == 'B' || ch == 'C'){
			putchar('2');
		}else if(ch == 'D' || ch == 'E' || ch == 'F'){
			putchar('3');
		}else if(ch == 'G' || ch == 'H' || ch == 'I'){
			putchar('4');
		}else if(ch == 'J' || ch == 'K' || ch == 'L'){
			putchar('5');
		}else if(ch == 'M' || ch == 'N' || ch == 'O'){
			putchar('6');
		}else if(ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'){
			putchar('7');
		}else if(ch == 'T' || ch == 'U' || ch == 'V'){
			putchar('8');
		}else if(ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z'){
			putchar('9');
		}else {
			putchar(ch);
		}

	}
	printf("\n");

	return 0;
}