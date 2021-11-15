#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char a[30], ch;
	int i, maxLength = 0;
	printf("Enter message: ");
	while ((ch = getchar()) != '\n') {
		a[maxLength] = ch;
		maxLength++;
	}

	for (i = 0; i < maxLength; i ++) {
		ch = toupper(a[i]);
		if (ch == 'A') {
			ch = '4';
		} else if (ch == 'B') {
			ch = '8';
		} else if (ch == 'E') {
			ch = '3';
		} else if (ch == 'I') {
			ch = '1';
		} else if (ch == 'O') {
			ch = '0';
		} else if (ch == 'S') {
			ch = '5';
		}

		printf("%c", ch);
	}
	printf("!!!!!!!!!!\n");


	return 0;
}