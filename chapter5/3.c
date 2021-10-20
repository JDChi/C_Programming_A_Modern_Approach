#include <stdio.h>

int main(int argc, char const *argv[])
{
	float comission, value, stock_price, competitor_comission;
	int stock_count;

	printf("Enter count of stocks: ");
	scanf("%d", &stock_count);
	printf("Enter price of stocks: ");
	scanf("%f", &stock_price);

	value = stock_count * stock_price;

	if(value < 2500.00f){
		comission = 30.00f + .017f * value;
	}else if (value < 6250.00f){
		comission = 56.00f + .0066f * value;
	}else if(value < 20000.00f){
		comission = 76.00f + .0034f * value;
	}else if(value < 50000.00f){
		comission = 100.00f + .0022f * value;
	}else if(value < 500000.00f){
		comission = 155.00f + .0011f * value;
	}else{
		comission = 255.00f + .0009f * value;
	}

	if(comission < 39.00f)
		comission = 39.00f;

	if(stock_count < 2000){
		competitor_comission = 33 + stock_count * 0.03;
	}else {
		competitor_comission = 33 + stock_count * 0.02;
	}


	printf("Commission: $%.2f\n", comission);
	printf("Competitor Commission: $%.2f\n", competitor_comission);
	return 0;
}