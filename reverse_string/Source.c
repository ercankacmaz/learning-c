#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include "new_lib.h"



#define             SIZE                 100




int main()
{
	char str[SIZE];

	printf("Bir yazi giriniz: ");
	sgets(str);

	int length = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		++length;
	}

	for (int i = 0; i < length / 2; i++)
	{
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
	printf("Yeni yazi: %s\n", str);
}