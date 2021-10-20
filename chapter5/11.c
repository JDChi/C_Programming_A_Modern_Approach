#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	int single = number % 10;
	int ten = number / 10;


	printf("You enter the number ");
	if(number < 20){
		switch(number){
			case 11:
			printf("eleven\n");
			break;
			case 12:
			printf("twelve\n");
			break;
			case 13:
			printf("thirdteen\n");
			break;
			case 14:
			printf("fourteen\n");
			break;
			case 15:
			printf("fifteen\n");
			break;
			case 16:
			printf("sixteen\n");
			break;
			case 17:
			printf("seventeen\n");
			break;
			case 18:
			printf("eighteen\n");
			break;
			case 19:
			printf("nighteen\n");
			break;
		}
	}else{
		switch(ten){
			case 9:
			printf("nighty");
			break;
			case 8:
			printf("eighty");
			break;
			case 7:
			printf("seventy");
			break;
			case 6:
			printf("sixty");
			break;
			case 5:
			printf("fifty");
			break;
			case 4:
			printf("fourty");
			break;
			case 3:
			printf("thirdty");
			break;
			case 2:
			printf("twenty");
			break;
		}

		switch(single){
			case 9:
			printf("-nine\n");
			break;
			case 8:
			printf("-eight\n");
			break;
			case 7:
			printf("-seven\n");
			break;
			case 6:
			printf("-six\n");
			break;
			case 5:
			printf("-five\n");
			break;
			case 4:
			printf("-four\n");
			break;
			case 3:
			printf("-three\n");
			break;
			case 2:
			printf("-two\n");
			break;
			case 1:
			printf("-one\n");
			break;
			case 0:
			printf("\n");
			break;
		}
	}

	return 0;
}