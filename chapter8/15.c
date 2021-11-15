#include <stdio.h>

int main(int argc, char const *argv[])
{
	char chars[80];
	char ch;
	int index = 0;
	printf("Enter message to be encrypted: ");
	while((ch = getchar()) != '\n'){
		chars[index] = ch;
		index++;
	}

	int amount;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &amount);

	printf("Encrypted message: ");
	for(int i = 0; i < index; i++){
		char current_char = chars[i];
		if(current_char >= 'A' && current_char <= 'Z'){
			current_char = ((current_char - 'A') + amount) % 26 + 'A';
		}else if(current_char >= 'a' && current_char <= 'z'){
			current_char = ((current_char - 'a') + amount) % 26 + 'a';
		}

		printf("%c", current_char);
	}
	printf("\n");
	return 0;
}