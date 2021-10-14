#include <stdio.h>

int main(int argc, char const *argv[])
{
	int item_number;
	float unit_price;
	int year, month, day;
	printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    // 价格最大取值为 9999.99 所以总共需要6位
    printf("%-d\t$%6.2f\t%02d/%02d/%d\n", item_number, unit_price, month, day, year);

	return 0;
}