#define _CRT_SECURE_NO_WARNINGS




#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define SIZE     20





int main()
{
	int a[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 20 + 1;
		printf("%3d", a[i]);
	}
	printf("\n");
	for (int i = SIZE - 1; i >= 0; --i)
	{
		for (int k = 0; k < SIZE; ++k)
		{
			if (a[k] > i)
			{
				putchar(' ');
				putchar(' ');
				putchar('*');
			}
			else
			{				
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
		
		}
		printf("\n");
	}
	
}