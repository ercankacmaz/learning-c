#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <string.h>
#include "new_lib.h"




#define     SIZE     100


int is_at_end(const char* p1, const char* p2)
{
	size_t len1 = strlen(p1);
	size_t len2 = strlen(p2);

	if (len2 > len1)
		return 0;
	return !strcmp(p1 + len1 - len2, p2);

}


int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Bir yazi girin: ");
	sgets(s1);

	printf("Bir yazi daha girin: ");
	sgets(s2);

	if (is_at_end(s1, s2))
	{
		printf("(%s) yazisi (%s) yazisinin sonuda var..!\n", s2, s1);
	}
	else
	{
		printf("Yazi bulunamadi..!\n");
	}
}