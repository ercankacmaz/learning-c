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