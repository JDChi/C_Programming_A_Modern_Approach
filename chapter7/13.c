#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	float space_count, ch_count;
	float result;
	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n'){
		if(ch == ' '){
			space_count++;
		}else{
			ch_count++;
		}
	}

	printf("Average word length: %.1f\n", ch_count / (space_count + 1));
	return 0;
}