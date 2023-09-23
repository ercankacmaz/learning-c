#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"



int main()
{
	size_t n;
	printf("Dizinin eleman sayisini giriniz: ");
	(void)scanf("%zu", &n);

	int* p = (int*)malloc(sizeof(int) * n);
	if (p == NULL)
	{
		printf("Bellek tahsis edilemedi..!\n");
		exit(EXIT_FAILURE);
	}

	randomize();

	set_array_random(p, n);
	print_array(p, n);

	free(p);
}