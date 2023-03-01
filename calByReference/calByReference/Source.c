#include<stdio.h>

void func(int* x)
{
	*x = 125;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int y = 25;
	printf("Y = %d\n\n", y);
	func(&y);
	printf("Y = %d\n", y);

	printf("\n\n\n");

	int a = 15;
	int b = 20;
	printf("a: %d, b: %d\n\n ", a, b);
	swap(&a, &b);
	printf("a: %d, b: %d\n\n ", a, b);

}