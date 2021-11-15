#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int chars[26] = {0};
	char first, second;
	int count, index;
	printf("Enter first word: ");
	while((first = getchar()) != '\n'){
		if(isalpha(first)){
			first = tolower(first);
			index = first - 'a';
			count = chars[index];
			count++;
			chars[index] = count;
		}

	}

	printf("Enter second word: ");
	while((second = getchar()) != '\n'){
		if(isalpha(second)){
			second = tolower(second);
			index = second - 'a';
			count = chars[index];
			count--;
			chars[index] = count;
		}
	}

	for(int i = 0; i < 26; i ++){
		if(chars[i] != 0){
			printf("Ther words are not anagrams.\n");
			break;
		}
		if(i == 25){	
			printf("Ther words are anagrams.\n");
			break;
		}
	}


	return 0;
}