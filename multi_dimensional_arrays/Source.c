#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



void set_rand_multi_20(int(*a)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t k = 0; k < 20; ++k)
		{
			a[i][k] = rand() % 10;
		}
	}
}


void print_multi_20(const int(*a)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t k = 0; k < 20; ++k)
		{
			printf("%d", a[i][k]);
		}
		printf("\n");
	}
	printf("-----------------------------------------------------------------");
}




int main()
{
	int a[10][20];
	randomize();

	set_rand_multi_20((int*)a, 10);
	print_multi_20((int*)a, 10);





}