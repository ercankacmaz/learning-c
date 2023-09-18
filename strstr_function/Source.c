#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "new_lib.h"



#define     SIZE      100



int main()
{
	char str[SIZE];
	char str_search[SIZE];
    
	printf("Bir yazi giriniz: ");
	sgets(str);

	printf("Ilk yazinin icinde aranacak yaziyi giriniz: ");
	sgets(str_search);

	char* p = strstr(str, str_search);

	printf("Yazi ilk dizinin %d. indisli elemaninda bulundu.\n", p - str);

	if (p)
	{
		size_t length = strlen(str_search);

		for (size_t i = 0; i < length; ++i)
		{
			*p++ = '*';
		}

		puts(str);
	}
	else
	{
		printf("Yazi bulunamadi..!\n");
	}
}