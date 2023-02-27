#include<stdio.h>

#define ROW 6
#define COL 6


int main()
{

	int mat[ROW][COL] = { 0 };

	for (int i = 0; i < ROW; i++)
	{
		int m = i;
		for (int j = 0; j < COL; j++)
		{
			mat[i][j] = m;
			printf("%d   ", mat[i][j]);
			m++;
		}
		printf("\n");
	}



	/*int mat[ROW][COL] = { {1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1} };

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d  ", mat[i][j]);
		}
		printf("\n");
	}*/





}