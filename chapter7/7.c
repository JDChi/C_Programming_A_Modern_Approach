#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a1, a2, b1, b2, result_a, result_b;
	char ch;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d%c%d/%d", &a1, &b1, &ch, &a2, &b2);

	if(ch == '+'){
		result_a = a1 * b2 + a2 * b1;
		result_b = b1 * b2;
	}else if(ch == '-'){
		result_a = a1 * b2 - a2 * b1;
		result_b = b1 * b2;
	}else if(ch == '*'){
		result_a = a1 * a2;
		result_b = b1 * b2;
	}else if(ch == '/'){
		result_a = a1 * b2;
		result_b = b1 * a2;
	}

	if(result_a == 0){
		printf("The result is 0\n");
	}else if(result_a == result_b){
		printf("The result is 1\n");
	}else {
		printf("The result is %d/%d\n", result_a, result_b);
	}
	
	
	return 0;
}