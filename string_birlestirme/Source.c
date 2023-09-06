#define _CRT_SECURE_NO_WARNINGS





#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"


#define      SIZE     100




int main()
{
	char str1[SIZE];
	char str2[SIZE];
	char str3[SIZE * 2];


	printf("iki yazi giriniz: ");
	scanf("%s%s", str1, str2);

	int i;
	int cnt = 0;

	for (i = 0; str1[i]!= '\0'; i++)
	{
			str3[i] = str1[i];
			++cnt;
	}
	for (i = cnt; str2[i - cnt] != '\0'; i++)
	{
			str3[i] = str2[i - cnt];
	}

	str3[i] = '\0';



	printf("%s\n", str3);

}