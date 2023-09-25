#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>



void greverse_array(void* p, size_t size, size_t sz)
{
	char* pfirst = (char*)p;
	char* plast = pfirst + (sz * (size - 1));

	while (pfirst < plast)
	{
		char temp = *pfirst;
		*pfirst++ = *plast;
		*plast-- = temp;
	}
}


int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	greverse_array(a, sizeof(a) / sizeof(*a), sizeof(*a));

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}