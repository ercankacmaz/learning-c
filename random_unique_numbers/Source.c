#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define       URAND_MAX             10


int urand(void)
{
	static int count = 0;
	static int flags[URAND_MAX] = { 0 };
	int val;

	if (count == URAND_MAX)
		return -1;

	while (flags[val = rand() % URAND_MAX])
		;
	++count;
	flags[val] = 1;

	return val;
}





int main()
{
	srand(NULL);


	for (int i = 0; i < URAND_MAX; ++i)
	{
		printf("%d", urand());
	}

	printf("\nHata degeri: %d", urand());
}