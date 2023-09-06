#define _CERT_SECURE_NO_WARNINGS





#include <stdio.h>
#include <stdlib.h>
#include "new_lib.h"





#define      SIZE       100



int main()
{
	char str[SIZE];
	char s[SIZE];
	 
	printf("Yazi giriniz: ");
	sgets(str);

	int c;

	printf("Yazidan cikarilacak bir karakter giriniz: ");
	c = getchar();

	int indx = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != c)
		{
			s[indx++] = str[i];
		}
	}
	s[indx] = '\0';


	printf("%s %s", str, s);
}

