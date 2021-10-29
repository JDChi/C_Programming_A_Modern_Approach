#include <stdio.h>

int main(int argc, char const *argv[])
{
	char first, last, ch;
	printf("Enter a first and last name: ");
	scanf(" %c", &first);

	while((last = getchar()) != '\n' ){
		if(last == ' '){
           ch = ' ';
           continue;
		}

		if(ch == ' '){
			printf("%c" , last);
		}
     
	}
	printf(",");
	printf("%c\n" , first);

	return 0;
}