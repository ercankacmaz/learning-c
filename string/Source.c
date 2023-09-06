#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new_lib.h"




#define            SIZE          100




int main()
{
	char str[SIZE];

	printf("Bir yazi giriniz: ");
	sgets(str);
	printf("yazi : [%s]\n", str);

}