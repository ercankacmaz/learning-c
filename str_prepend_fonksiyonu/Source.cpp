#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



#define    SIZE  100

char* str_prepend(char* dest, const char* source)
{
	char stemp[SIZE];
	char* pstr = stemp;
	char* p = dest;
	strcpy(stemp, dest);

	while (*source != '\0')
	{
		*dest++ = *source++;
	}
	while (*pstr != '\0')
	{
		*dest++ = *pstr++;
	}

	*dest = '\0';

	return p;
}


int main()
{
	char dest[SIZE];
	char source[SIZE];

	printf("Ilk yaziyi giriniz: ");
	(void)scanf("%s", dest);

	printf("Ikinci yaziyi giriniz: ");
	(void)scanf("%s", source);
    
	puts(str_prepend(dest, source));
}