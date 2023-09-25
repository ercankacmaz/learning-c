#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"


#define     SIZE 1000

int compare(void* a, void* b)
{
	int x = *(int*)a;
	int y = *(int*)b;

	return x - y;
}

int main()
{
	int a[SIZE];

	clock_t start = clock();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	qsort((void*)a, (size_t)SIZE, sizeof(int), compare);

	clock_t end = clock();

	clock_t difference = end - start;

	printf("Siralama %f saniyede bitti.\n", (double)difference / CLOCKS_PER_SEC);
	(void)getchar();

	print_array(a, SIZE);


}