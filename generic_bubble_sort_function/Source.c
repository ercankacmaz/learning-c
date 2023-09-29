#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



#define    SIZE    100

int cmp(const void* vp1, const void* vp2)
{
	const int* p1 = (const int*)vp1;
	const int* p2 = (const int*)vp2;

	return *p1 > *p2 ? 1 :
		   *p1 < *p2 ? -1 : 0;
}


void g_bubble_sort(void* vptr, size_t size, size_t sz, int (*fp)(const void* , const void* ))
{
	char* p = (char*)vptr;

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t k = 0; k < size - 1 - i; k++)
		{
			if (fp(p + k * sz,p + (k + 1) * sz) > 0)
			   gswap(p + k * sz, p + (k + 1) * sz, sz);
		}
	}
}



int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	g_bubble_sort(a, SIZE, sizeof(int), cmp);

	print_array(a, SIZE);
}