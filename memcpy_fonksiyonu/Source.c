#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "new_lib.h"

#define    SIZE     100

int main()
{
	int a[SIZE];
	int b[SIZE] = {0};

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	int indxa, indxb, n;
	printf("Indeks a giriniz: ");
	(void)scanf("%d", &indxa);
	printf("Indeks b giriniz: ");
	(void)scanf("%d", &indxb);
	printf("Kac eleman kopyalanacagini giriniz: ");
	(void)scanf("%d", &n);

	memcpy(b + indxb, a + indxa, n * sizeof(int));
	print_array(b, SIZE);
	
}