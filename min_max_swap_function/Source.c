#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"


#define     SIZE     20

int* get_min(int* p, int length)
{
	int* p_min = (int*)p;

	for (int i = 1; i < length; ++i)
	{
		if (*p_min < p[i])
		{
			p_min = (int*)(p + i);
		}
	}

	return p_min;
}

int* get_max(int* p, int length)
{
	int* p_max = (int*)p;

	for (int i = 1; i < length; ++i)
	{
		if (*p_max > p[i])
		{
			p_max = (int*)(p + i);
		}
	}

	return p_max;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	int* p_max = get_max(a, SIZE);
	int* p_min = get_min(a, SIZE);

	printf("\nDizinin en buyuk elemani %d'dir ve %d. indistedir.\n", *p_max, p_max - a);
	printf("Dizinin en kucuk elemani %d'dir ve %d. indistedir.\n", *p_min, p_min - a);

	swap(p_max, p_min);

	printf("\n\nDizinin en buyuk ve en kucuk elemanlarinin takaslanmis hali :\n");
	print_array(a, SIZE);

}