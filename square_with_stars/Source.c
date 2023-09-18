#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>


int main()
{
	int n;

	printf("Enter the size of square: ");
	(void)scanf("%d", &n);

	int c = n + '0';

	for (int i = 0; i < 2 * n - 1; ++i)
	{
		if (i == 0 || i == 2 * n - 2)
		{
			for (int k = 0; k < 2 * n - 1; ++k)
			{
				putchar('*');
				putchar(' ');
			}

		
		}
		else
		{
			for (int k = 0; k < 2 * n - 1; ++k)
			{
				if (k == 0 || k == 2 * n - 2)
				{
					putchar('*');
					putchar(' ');
				}
				else
				{
					putchar(' ');
					putchar(' ');
				}
			}
		}
		printf("\n");
		
	}
}