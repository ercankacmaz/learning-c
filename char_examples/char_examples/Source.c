#include<stdio.h>



int main()
{

	char x = 'a';
	int c = 97;
	char z = c + 1;
	printf("%c = %d in ASCII table.\n", x, x);
	printf("Z is %c\n", z);

	for (int i = 0; i <= 127; i++)
	{
		printf("%d %c\n", i, i);
	}

	for(int i = 'A'; i <= 'Z'; i++)
	{
		printf("%d %c\n", i, i);
	}




}