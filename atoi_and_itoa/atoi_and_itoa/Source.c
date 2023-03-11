#include<stdio.h>
#include<stdlib.h>




int main()
{
	char str[] = "34KM751";

	int num1 = atoi(str);
	int num2 = atoi(str + 4);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);

	printf("\n\nitoa");


	int y;
	char str1[100];
	printf("Enter a number: ");
	scanf_s("%d", &y);

	_itoa(y, str1, 16);
	printf("%s", str1);


	printf("\n\nsprintf\n");


	int x = 20, z = 25;

	char s[10];

	sprintf(s, "%d %d", x, z);
	printf("s: %s", s);






}