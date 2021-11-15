#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int values[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int result = 0;
	char ch;
	printf("Enter a word: ");
	while((ch = getchar()) != '\n'){
		ch = toupper(ch);
		int index = ch - 'A';
		result = result + values[index]; 
	}
	printf("Scrabble value: %d\n", result);
	return 0;
}