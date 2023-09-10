#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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

double mean(const int* p, int length)
{
	return (double)sum_array(p, length) / length;
}

double std_dev(const int* p, int length)
{
	double sum_square = 0.;
	double _mean = mean(p, length);

	for (int i = 0; i < length; i++)
	{
		sum_square += ((*p - _mean) * (*p - _mean));
		++p;
	}

	return sqrt(sum_square / length);
}

int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	printf("Sum of array elements: %d\n", sum_array(a, SIZE));
	printf("Mean of array elements: %f\n", mean(a, SIZE));
	printf("Standart deviation of array elements: %f\n", std_dev(a, SIZE));
}