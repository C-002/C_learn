#include<stdio.h>

int main()
{
	int amount = 100;
	int price = 0;

	printf("Please input price: ");
	scanf_s("%d", &price);

	printf("Please input amount: ");
	scanf_s("%d", &amount);

	int change = amount - price;

	printf("The change is: %d", change);

	return 0;
}