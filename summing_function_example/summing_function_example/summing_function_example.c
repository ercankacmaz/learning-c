#include<stdio.h>

/* variadic functions are functions that different number of arguement.

int f(int x, int y, ...) elipsis




*/




//void func() --> void functions are used without return values.

void oddnum()  // functions can be declared witýut of parameters. Olso there no return value in this function.
{
	for (int i = 1; i < 10; i += 2)
	{
		printf("%d ", i);

	}


}

int sum(int x, int y)  //function declaretion
{                      //function definition

	int result = x + y;  //function body
	return result;


}


int main()
{
	int number1, number2;

	printf("Enter two integers: ");
	scanf_s("%d%d", &number1, &number2);

	printf("Sum = %d\n", sum(number1, number2));

	oddnum();




}