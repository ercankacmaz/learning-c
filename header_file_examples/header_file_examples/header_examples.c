#include<stdio.h>
#include"first_lib.h"



int main()
{
	int num1, num2;
	//int number;
	printf("Enter two number: ");
	scanf_s("%d%d", &num1, &num2);

	printf("Factorail of maximum number is %d.", factorial(maxofTwo(num1, num2)));

	/*printf("Maximum number is %d.\n", maxofTwo(num1, num2));

	printf("Enter an another number: ");
	scanf_s("%d", &number);

	printf("Factorial is equal %d.", factorial(number));*/



}