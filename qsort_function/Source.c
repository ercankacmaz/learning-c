#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



#define     SIZE    100

int cmp(const void* vp1, const void* vp2)
{
	const int* p1 = (const int*)vp1;
	const int* p2 = (const int*)vp2;

	return *p1 > *p2 ? 1 :
		*p1 < *p2 ? -1 : 0;
}


int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	qsort(a, SIZE, sizeof(int), cmp);

	print_array(a, SIZE);


}