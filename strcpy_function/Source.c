#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>





#define       SIZE     100

char* Strcpy(char* pdest, const char* psource)
{
	char* ptemp = pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}


int main()
{
	char source[SIZE];
	char dest[SIZE];

	printf("Bir yazi giriniz: ");
	(void) scanf("%s", source);

	Strcpy(dest, source);

	printf("(%s) yazisi buraya (%s) kopyalandi..!\n", source, dest);
}