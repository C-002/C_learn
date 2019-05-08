#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(long long)=%ld\n", sizeof(long long));

	int i = 0;
	int p;
	p = (int)&i;
	printf("%p\n", &i);
	printf("%p\n", &p);

	int a[10];
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	
	system("pause");
	return 0;
}
/*
一.c语言数据占用字节

32位：char 1   short  2   int 4   long 4   long long 8

64位：char 1   short  2   int 4   long 8   long long 8

二.可能原因  编译器的数据模型

Datetype	LP64	ILP64	LLP64	ILP32	LP32

char		8		8		8		8		8

short		16		16		16		16		16

int		32		64		32		32		16

long		64		64		32		32		32

long long	64

pointer		64		64		64		32		32

一般情况下windows64位一般使用LLP64模型

64位Unix, Linux使用的是LP64模型
三.放轻松电脑不是假的
-------------------- -
作者：静叶沉浮
来源：CSDN
原文：https ://blog.csdn.net/akyj1021/article/details/81432758 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/