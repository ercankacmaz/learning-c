#include<stdio.h>



int main()
{
	int x = 20;
	int y = 25;
	int* ptr = &x;
	printf("Adress of x is: %p\n", ptr);
	printf("Value of *ptr is: %d\n", *ptr);
	printf("\n\n\n");
	ptr = &y;
	printf("Adress of y is: %p\n", ptr);
	printf("Value of *ptr is: %d\n", *ptr);


	printf("\n\n\n");
	*&y = 35;
	printf("Y is: %d\n", y);
	printf("\n\n\n");

	char* cptr = (char *)0x16F8A;
	printf("%p\n", cptr);






}