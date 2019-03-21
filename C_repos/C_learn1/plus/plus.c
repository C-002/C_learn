#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	printf("Please input two interger number: ");
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d", a, b, a + b);
	
	system("pause");
	return 0;
}	