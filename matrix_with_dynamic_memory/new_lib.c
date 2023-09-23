#include "new_lib.h"
#include<stdio.h>
#include<stdlib.h>




void set_array_random(int *p, int size)
{
	while (size--)
		*p++ = rand() % 1000;
}


void print_array(const int *p, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n------------------------------------------------------------------------------------\n");

}


void sgets(char* p)
{
	int c;

	while ((c = getchar()) != '\n')
	{
		*p++ = (char)c;
	}
	*p = '\0';
}


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

int* get_min_adress(int* p, int length)
{
	int* p_min = (int*)p;

	for (int i = 1; i < length; ++i)
	{
		if (*p_min > p[i])
		{
			p_min = (int*)(p + i);
		}
	}

	return p_min;
}

int* get_max_adress(int* p, int length)
{
	int* p_max = (int*)p;

	for (int i = 1; i < length; ++i)
	{
		if (*p_max < p[i])
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

void selection_sort(int* p, int length)
{

	for (int i = 0; i < length; i++)
	{
		int p_min = get_min_adress(p, length - i);
		swap(p++, p_min);
	}
}