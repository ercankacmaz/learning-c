#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


void gswap(void* p1, void* p2, size_t size)
{
	char* c1 = (char*)p1;
	char* c2 = (char*)p2;

	while (size--)
	{
		char temp = *c1;
		*c1++ = *c2;
		*c2++ = temp;
	}
}

int main()
{
	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	gswap(&a, &b, sizeof(int));
	printf("a = %d, b = %d\n", a, b);

	double dval1 = 17.5896;
	double dval2 = 65.7891;
	printf("dval1 = %f, dval2 = %f\n", dval1, dval2);
	gswap(&dval1, &dval2, sizeof(double));
	printf("dval1 = %f, dval2 = %f\n", dval1, dval2);

	char str1[20] = "Ercan";
	char str2[20] = "Kacmaz";
	printf("str1 = %s, str2 = %s\n", str1, str2);
	gswap(str1, str2, sizeof(str1));
	printf("str1 = %s, str2 = %s\n", str1, str2);
}