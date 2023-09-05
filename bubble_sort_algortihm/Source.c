#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define       SIZE             20       


int main()
{
	int a[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; ++i)
	{
		if (i && i % 20 == 0)
			printf("\n");
		a[i] = rand() % 100;
		printf("%2d ", a[i]);
	}
	printf("\n------------------------------------------------------------------------------\n");

	for (int i = 0; i < SIZE -1; i++)
	{
		for (int k = 0; k < SIZE - 1 - i; k++)
		{
			
			if (a[k] > a[k + 1])
			{
				int temp = 0;
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
				temp = 0;
			}
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%2d ", a[i]);
	}
}