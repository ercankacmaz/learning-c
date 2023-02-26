#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE 10


int main()
{
	srand(time(NULL));
	
	int a[SIZE];
	int b[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int r = rand() % 100;
		a[i] = r;
		printf("a[%d] = %d, ", i, a[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
		printf("\nb[%d] = %d", i, b[i]);
	}
	






	/*int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
		printf("b[%d] = %d\n", i, b[i]);
	}*/





}