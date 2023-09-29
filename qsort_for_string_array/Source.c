#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "new_lib.h"


int fcmp(const void* vp1, const void* vp2)
{
	

	const char** p1 = (const char**)vp1;
	const char** p2 = (const char**)vp2;
	
	return strcmp(*p1, *p2);
	//return strcmp(*(char* const*)vp1, *(char* const*)vp2);
}



int main()
{
	char* p[] = {"ercan", "seyma", "miray", "setrap", "berke", "ozge", "enis", "furkan", "yigit", "aleyna", "dilruba"};

	for (size_t i = 0; i < 11; i++)
	{
		printf("%s ", p[i]);
	}
	printf("\n");
	qsort(p, 11, sizeof(char*), fcmp);

	for (size_t i = 0; i < 11; i++)
	{
		printf("%s ", p[i]);
	}
}