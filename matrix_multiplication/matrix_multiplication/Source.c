#include<stdio.h>

#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 2

int main()
{
	

	int mat1[ROW1][COL1];
	int mat2[ROW2][COL2];
	int mult_mat[2][2];

	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < COL1; j++)
		{
			int value;
			printf("Enter the %d row %d column value of Matrix1: ", i, j);
			scanf_s("%d", &value);
			mat1[i][j] = value;
		}
	}

	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < COL2; j++)
		{
			int value;
			printf("Enter the %d row %d column value of Matrix2: ", i, j);
			scanf_s("%d", &value);
			mat2[i][j] = value;
		}
	}

	printf("\nMatrix1 = ");
	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < COL1; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n          ");
	}
	printf("\nMatrix2 = ");
	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < COL2; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n          ");
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int temp = 0;
			for (int k = 0; k < 2; k++)
			{
				temp += mat1[i][k] * mat2[k][j];
			
			}
			mult_mat[i][j] = temp;

		}
		
	}
	printf("\nMultiplication of two matrix is:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", mult_mat[i][j]);
		}
		printf("\n");
	}


}