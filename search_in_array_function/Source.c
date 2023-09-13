#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"




#define      SIZE      20


int* search_in_array(const int* p, int length, int key)
{
	while (length--)
	{
		if (*p == key)
			return (int*)p;
		++p;
	}

	return NULL;
}




int main()
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);

	print_array(a, SIZE);

	int ival;
	printf("Dizide aranacak tam sayiyi giriniz: ");
	(void) scanf("%d", &ival);

	int* p = search_in_array(a, SIZE, ival);
	if (p)
	{
		*p = -1;
		print_array(a, SIZE);
		printf("Aranan deger %d. indiste bulunda ve -1e donusturuldu.\n", p - a);
	}
	else
	{
		printf("Aranan deger bulunamadi..!\n");
	}


}