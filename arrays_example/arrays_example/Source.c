#include<stdio.h>
#define SIZE 5



int main()
{
	int arr[SIZE];
	int sum = 0;
	printf("Enter the elements of the array:\n");

	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	printf("Sum is %d.", sum);




}