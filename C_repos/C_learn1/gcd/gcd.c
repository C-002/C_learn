#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	int t;
	printf("Please enter two number: ");
	scanf_s("%d %d", &a, &b);

	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
		printf("a=%d, b=%d, t=%d\n", a, b, t);
	}

	printf("gcd=%d\n", a);

	system("pause");
	return 0;
}