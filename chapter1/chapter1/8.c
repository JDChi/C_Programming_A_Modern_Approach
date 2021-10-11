#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan, rate, payment, month_rate;
	float first, second, third;
	printf("Enter amount of loan: ");
	scanf("%f" , &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f" , &payment);

    month_rate = rate / 100 /12;

	first = loan * (1 + month_rate) - payment;
	second = first * (1 + month_rate) - payment;
	third = second * (1 + month_rate) - payment;

	printf("Balance remaining after first payment : $%.2f\n" , first);
	printf("Balance remaining after second payment : $%.2f\n" , second);
    printf("Balance remaining after third payment : $%.2f\n" , third);

	return 0;
}