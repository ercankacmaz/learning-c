#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

void func1(void)
{
	printf("func1 cagrildi..!\n");
}

void func2(void)
{
	printf("func2 cagrildi..!\n");
}

void func3(void)
{
	printf("func3 cagrildi..!\n");
}

void func4(void (*p)(void))
{
	p();
}

int main()
{
	func4(func1);
	func4(func2);
	func4(func3);
}