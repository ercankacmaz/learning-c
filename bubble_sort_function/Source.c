#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"


#define    SIZE      100


void bubble_sort(int* p, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		for (int k = 0; k < length - 1 - i; ++k)
		{
			if (p[k] > p[k + 1])
			{
				int temp = p[k];
				p[k] = p[k + 1];
				p[k + 1] = temp;
			}
		}
	}
}



int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	bubble_sort(a, SIZE);

	print_array(a, SIZE);

}