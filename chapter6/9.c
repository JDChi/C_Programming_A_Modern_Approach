#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan, rate, payment, month_rate;
	int count;
	float remaining;
	printf("Enter amount of loan: ");
	scanf("%f" , &remaining);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f" , &payment);
	printf("Enter count for payment: ");
	scanf("%d", &count);

    month_rate = rate / 100 /12;

    for(int i = 1; i <= count; i++){
      remaining = remaining * (1 + month_rate) - payment;
      printf("Balance remaining after %d payment : $%.2f\n" , i, remaining);
      if(remaining <= 0){
      	break;
      }
    }


	return 0;
}