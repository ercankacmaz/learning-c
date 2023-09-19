#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include "new_lib.h"



#define     SIZE       100

char* Strbrk(const char* str_source, const char* s)
{
	while (*str_source != '\0')
	{
		if (strchr(s, *str_source) != NULL)
			return str_source;
		++str_source;
	}

	return NULL;
}

int main()
{
	char str[SIZE];
	char s[SIZE];

	printf("Bir yazi giriniz: ");
	sgets(str);

	printf("Yazi icinde aranacak karakterleri giriniz: ");
	sgets(s);

	char* p = Strbrk(str, s);

	if (p)
	{
		printf("%c karakateri %d. indiste bulundu.\n", *p, p - str);

		*p = '!';

		puts(str);
	}
	else
	{
		printf("Hicbir karakter bulunamadi..!\n");
	}

}