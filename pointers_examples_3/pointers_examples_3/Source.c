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

void print_max_min_element(const int* ptr, int size)
{
	int max = *ptr;
	int min = *ptr;
	for (int i = 1; i < size; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
      
        else if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	printf("Max element value of the array: %d\n\n", max);
	printf("Min element value of the array: %d\n\n", min);


}

int main()
{

	int arr[SIZE];
	int a;
	printf("Enter the element number of the array: ");
	scanf_s("%d", &a);

	scan_arr(arr, a);

	printf("\n\n");

	print_max_min_element(arr, a);

	printf("\n\n");




}