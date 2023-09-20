#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"




#define        SIZE           10


void get_min_max_adress(const int* pa, size_t len, int** p_min, int** p_max)
{
	*p_min = *p_max = (int*)pa;

	for (size_t i = 1; i < len; ++i)
	{
		if (pa[i] < **p_min)
		{
			*p_min = (int*) (pa + i);
		}
		else if (**p_max < pa[i])
		{
			*p_max = (int*)(pa + i);
		}
	}
}




int main()
{
	int a[SIZE];

	int* p_max;
	int* p_min;

	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	get_min_max_adress(a, SIZE, &p_min, &p_max);
	printf("%d indisli %d elemani en kucuk elemanidir.\n", p_min - a, *p_min);
	printf("%d indisli %d elemani en buyuk elemanidir.\n", p_max - a, *p_max);

	swap(p_min, p_max);
	print_array(a, SIZE);


}