#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>



void test_print(const char* str, int(*p)(int))
{
	printf("%s\n", str);

	for (size_t i = 0; i < 128; ++i)
	{
		if (p(i))
		{
			putchar(i);
		}
	}
	printf("\n");
}



int main()
{
	test_print("isalpha:", isalpha);
	test_print("isalhaum:", isalnum);
	test_print("isdigit:", isdigit);
	test_print("isxdigit:", isxdigit);
	test_print("isupper:", isupper);
	test_print("islower:", islower);
}