#include <stdio.h>

int main(int argc, char const *argv[])
{
	char chars[30], ch;
	int i, j, start;
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n') {
		chars[i] = ch;
		i++;
		if (ch == '?' || ch == '.' || ch == '!') {
			break;
		}
	}

	start = i - 1;
	for (j = i - 1 ; j >= 0; j--) {
		if (chars[j] == ' ') {
			for (; start <= j; start++) {
				printf("%c", chars[start]);
			}
		}
	}
	printf("%c\n", chars[i]);


	return 0;
}