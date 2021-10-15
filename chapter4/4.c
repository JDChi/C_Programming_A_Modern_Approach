#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, left, ten = 1, count = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    int result = 0;

    if(number >= 0 && number < 8){
        result = number;
    }else {
        while(number >= 8){
            left = number % 8;
            number = number / 8;
           
            if(count != 0){
                ten = 1;
                for(int i = 0; i < count; i++){
                    ten = ten * 10;
                }
            }
            result = result + left * ten;
            count++;
        }
        result = result + number * ten * 10;
    }

    printf("In octal, your number is: %05d\n", result);

    return 0;
}
