#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	scanf_s("%d", &x);

	int digit, data;
	int ret = 0;

	data = x;
	while (data > 0) {
		digit = data % 10;
		ret = ret * 10 + digit;
		printf("x=%d, digit=%d, ret=%d\n", data, digit, ret);
		data /= 10;
	}
	printf("%d\n", ret);
//���ڡ�23000���������֣�ֻ�������32��������������

	data = x;
	while (data > 0) {
		digit = data % 10;
		printf("%d", digit);
		data /= 10;
	}

	system("pause");
	return 0;
}



