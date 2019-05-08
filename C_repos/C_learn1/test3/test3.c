#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d", j, i, j*i);
			if (i*j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}