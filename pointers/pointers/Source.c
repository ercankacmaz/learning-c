#include<stdio.h>




int main()
{
	int x = 20;
	double y = 25.758;
	int* ptr1 = &x; // this pointer hold the address of the integer x
	double* ptr2 = &y; // this pointer hold the address of the double y
	printf("%p %p\n", &x, &y);
	printf("x = %d, address of x = %p\n", x, ptr1);
	printf("y = %f, address of y = %p\n", y, ptr2);


	printf("\n\n");

	printf("Size of char pointer : %zu\n", sizeof(char*));
	printf("Size of int pointer : %zu\n", sizeof(int*));
	printf("Size of short pointer : %zu\n", sizeof(short*));
	printf("Size of long pointer : %zu\n", sizeof(long*));
	printf("Size of long long pointer : %zu\n", sizeof(long long*));
	printf("Size of float pointer : %zu\n", sizeof(float*));
	printf("Size of double pointer : %zu\n", sizeof(double*));
	printf("Size of long double pointer : %zu\n", sizeof(long double*));




}