#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	memset(a, 0, sizeof(a));
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n----------------------------------------------------\n");

	char str[50] = "ercan12345kacmaz";
	memset(str + 5, '!', 5);
	printf("%s\n", str);
}