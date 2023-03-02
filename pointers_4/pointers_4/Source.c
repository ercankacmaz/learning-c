#include<stdio.h>

void scan_arr(int (*arr)[4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Enter the %d. row, %d. column value: ", i, j);
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void print_arr(int const (*arr)[4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main()
{

	int arr[3][4];

	scan_arr(arr, 3);
	printf("\n");
	print_arr(arr, 3);







}
