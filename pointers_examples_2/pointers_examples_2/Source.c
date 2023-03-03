#include<stdio.h>

#define SIZE 1000


void scan_arr(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter %d. elemt of array: ", i);
		scanf_s("%d", &ptr[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d, ", i, ptr[i]);
		
	}
}

int* print_max_element(const int* ptr, int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}

	return &max;
}

int main()
{
   
	int arr[SIZE];
	int a;
	printf("Enter the element number of the array: ");
	scanf_s("%d", &a);

	scan_arr(arr, a);

	printf("\n\n");

	printf("Max element value of the array: %d", *print_max_element(arr, a));

	printf("\n\n");




}