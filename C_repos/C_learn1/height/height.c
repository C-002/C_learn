#include<stdio.h>
#include<stdlib.h>

int main()
{
	double foot, inch;

	printf("Please enter height (e.g. \"5 7\" means 5 feet 7 inches): ");
	scanf_s("%lf %lf", &foot, &inch);
	
	printf("The height is : %f\n", ((foot + inch / 12) * 0.3048));
	system("pause");
	return 0;
}