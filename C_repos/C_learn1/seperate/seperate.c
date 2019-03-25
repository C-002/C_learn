#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	scanf_s("%d", &x);

	int mask = 1;
	int data = x;
	while (data > 9) {
		data /= 10;
		mask *= 10;
	}
	printf("x=%d, data=%d, mask=%d\n", x, data, mask);
	
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");

	system("pause");
	return 0;
}