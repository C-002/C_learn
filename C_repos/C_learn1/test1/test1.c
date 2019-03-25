#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	int i, j, k, count=0;
	for (i = a; i <= a + 3; i++) {
		for (j = a; j <= a + 3; j++) {
			for (k = a; k <= a + 3; k++) {
				if (i!=j && j!=k && i!=k) {
					count++;
					printf("%d%d%d", i, j, k);
					if (count % 6 == 0) {
						printf("\n");
					}
					else {
						printf(" ");
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}