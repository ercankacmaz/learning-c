#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define SIZE 50


int main()
{

	srand((unsigned int)time(NULL));

	int a[SIZE];
	int counter = 0;
	int diveder;
	int sum = 0;
	int max = 0, min = 99;

	for (int i = 0; i < SIZE; i++)
	{
		unsigned int r = rand() % 100;
		a[i] = r;
		printf("a[%d] = %d, ", i, a[i]);
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		
	}
	printf("\n\n\n");
	printf("Enter a number: ");
	scanf_s("%d", &diveder);
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] % diveder == 0) {
			printf("a[%d] = %d, ", i, a[i]);
			counter++;
			sum += a[i];
		}
	}

	printf("\n\nThere are %d numbers, which can be diveded by %d.\n\n", counter, diveder);
	printf("\n\nSum of the numbers are %d, which can be diveded by %d.\n\n", sum, diveder);
	printf("\n\nMaximum number is %d\n\n", max);
	printf("\n\nMinimum number is %d\n\n", min);



}