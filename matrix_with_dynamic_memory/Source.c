#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



int main()
{
	size_t row, col;
	printf("Matrisin satir ve sutun sayisini giriniz: ");
	(void)scanf("%d%d", &row, &col);

	int** pd = (int**)malloc(row * sizeof(int*));
	if (!pd)
	{
		return 1;
	}
	
	for (size_t i = 0; i < row; ++i)
	{
		pd[i] = (int*)malloc(col * sizeof(int));

		if (!pd[i])
			return 1;
	}
	printf("\n");
	randomize();

	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			pd[i][k] = rand() % 100;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			printf("%2d ", pd[i][k]);
		}
		printf("\n");
	}
	printf("-------------------------------------------------------------");

	for (size_t i = 0; i < row; i++)
	{
		free(pd[i]);
	}
	free(pd);
}