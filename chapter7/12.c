#include <stdio.h>

int main(int argc, char const *argv[])
{
	float num, result, first;
	char ch;
	printf("Enter an expression: ");
	scanf("%f", &first);
	result = first;

	while(1){
		scanf("%c", &ch);
		if(ch == '\n'){
			break;
		}
		scanf("%f", &num);

		if(ch == '+'){
			result = result + num;
		}else if(ch == '-'){
			result = result - num;
		}else if(ch == '*'){
			result = result * num;
		}else if(ch == '/'){
			result = result / num;
		}
	}

	printf("Value of expression: %f\n", result);
	
	return 0;
}