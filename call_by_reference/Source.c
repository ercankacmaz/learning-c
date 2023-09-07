#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>



void funtion2(int* p1)
{
	*p1 += 10;
}




void function(int* p)
{
	++* p;
	funtion2(p);
}



int main()
{
	int x = 5;
	int* p = &x;

	printf("x = %d\n", x);

	function(p);

	printf("x = %d\n", x);
}