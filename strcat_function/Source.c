#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>



#define    SIZE      100



char* Strcat(char* pdest, const char* psource)
{
	char* ptemp = pdest;
	while (*pdest)
		++pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}



int main()
{
	char source[SIZE];
	char dest[SIZE];

	printf("Iki yazi giriniz: ");
	(void) scanf("%s%s", dest, source);

	Strcat(dest, source);

	printf("(%s) yazilar arka arkaya kopyalandi..!", dest);

}