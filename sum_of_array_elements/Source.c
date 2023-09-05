#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include"my_lib.h"



#define SIZE       100





int main()
{
	int a[SIZE];
	int sum_of_array = 0;
	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);


	for (int i = 0; i < SIZE; ++i)
	{
		sum_of_array += a[i];
	}

	printf("\nSum of the elements of the array is %d\n", sum_of_array);
}