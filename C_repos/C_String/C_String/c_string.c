#include<stdio.h>
#include<stdlib.h>

int main() 
{
	char word[2];
	int ch;
	printf("%d--\n", ch = getchar());
	printf("%d==\n", ch == 'y');
	scanf_s("%1s", word, 2);
	printf("%s##\n", word);
	printf("%d++\n", word[0] == 'y');
	//printf("%d--\n", getchar());

	system("pause");
	return 0;
}