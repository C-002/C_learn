#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int alpha = 1, t, sum, p;
	int i, j, d;
	for (i = 1; i < n; i++) {
		alpha *= 10;
	}
	//printf("%d\n", alpha);

	for (i = alpha; i < alpha * 10; i++) {
		t = i;
		sum = 0;
		do {
			d = t % 10;
			t /= 10;
			p = d;
			for (j = 1; j < n; j++) {
				p *= d;
			}
			sum += p;
		} while (t > 0);
		if (sum == i) {
			printf("%d\n", i);
		}
	}

	system("pause");
	return 0;
}