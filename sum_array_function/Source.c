#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"


#define      SIZE                100


int sum_array(const int* p, int length)
{
	int sum = 0;

	while (length--)
	{
		sum += *p++;
	}

	return sum;
}



int main()
{
	int a[SIZE];
    
	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	printf("Sum of array elements: %d\n", sum_array(a, SIZE));
}