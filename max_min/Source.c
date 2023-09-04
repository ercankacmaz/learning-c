#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"my_lib.h"



#define SIZE        100


int main()
{
	int a[SIZE];
	

	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	int max = a[0];
	int min = a[0];

	for (int i = 1; i < SIZE; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];

		}
	}

	for (int i = 1; i < SIZE; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}


	printf("\nMax of array: %d \nMin of array: %d", max, min);
}