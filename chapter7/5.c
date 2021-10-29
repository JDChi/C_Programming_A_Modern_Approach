#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch;
	int result = 0;
	printf("Enter a word: ");
	while((ch = getchar()) != '\n'){
		ch = toupper(ch);

		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U'){
			result = result + 1;
		}else if(ch == 'D' || ch == 'G' ){
			result = result + 2;
		}else if(ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P'){
			result = result + 3;
		}else if(ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y'){
			result = result + 4;
		}else if(ch == 'K'){
			result = result + 5;
		}else if(ch == 'J' || ch == 'X'){
			result = result + 8;
		}else if(ch == 'Q' || ch == 'Z'){
			result = result + 10;
		}
	}
	printf("Scrabble value: %d\n", result);
	return 0;
}