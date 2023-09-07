#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>


void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}




int main()
{
	int x = 10;
	int y = 15;


	printf("x = %d, y = %d\n", x, y);

	swap(&x, &y);

	printf("x = %d, y = %d\n", x, y);

	
}