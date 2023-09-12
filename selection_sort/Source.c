#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



#define      SIZE     20

void selection_sort(int* p, int length)
{

	for (int i = 0; i < length; i++)
	{
		int p_min = get_min_adress(p, length - i);
		swap(p++, p_min);
	}
}

int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	selection_sort(a, SIZE);

	

	print_array(a, SIZE);




}