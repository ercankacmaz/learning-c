#include<stdio.h>

#define SIZE 1000

void scan_arr(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter the %d. elemnt of the array: ", i);
		scanf_s("%d", &ptr[i]);
	}
}

void print_arr(const int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, ptr[i]);
	}
}



int main()
{
	int arr[SIZE];

	int a;
	printf("Enter the element number of the array: ");
	scanf_s("%d", &a);

	scan_arr(arr, a);
	print_arr(arr, a);






}