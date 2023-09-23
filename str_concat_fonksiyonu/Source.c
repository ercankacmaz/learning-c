#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>




#define           SIZE               100

char* strconcat(const char* str1, const char* str2)
{
	char* p = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	if (!p)
	{
		fprintf(stderr, "Bellek tahsis edilemedi..!\n");
		exit(EXIT_FAILURE);
	}

	strcpy(p, str1);
	strcat(p, str2);

	return p;
}


int main()
{
	char str1[SIZE];
	char str2[SIZE];

	printf("Iki yazi giriniz: ");
	(void)scanf("%s%s", str1, str2);

	char* p = strconcat(str1, str2);
	printf("(%s) + (%s) = (%s)\n", str1, str2, p);

	free(p);
	p = NULL;
}