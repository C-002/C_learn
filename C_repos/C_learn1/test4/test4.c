#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(int x)
{
	int ret = 1;
	int i;
	if (x == 1 || (x % 2 == 0 && x != 2))
		ret = 0;
	for (i = 3; i <=sqrt(x); i += 2) {
		if (x%i == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);

	int i, j;
	int sum = 0, count = 0;
	//int isPrime;

	if (m == 1) {
		m = 2;
	}
	for (i = m; i <= n; i++) {
		//isPrime = 1;
		//for (j = 2; j < i-1; j++) {
		//	if (i%j == 0) {
		//		isPrime = 0;
		//		break;
		//		//ÅÐ¶ÏËØÊý
		//	}
		//}
		if (isPrime(i)) {
			count++;
			sum += i;
			printf("%d\t", i);
		}
	}
	printf("\n%d %d\n", count, sum);

	system("pause");
	return 0;
}