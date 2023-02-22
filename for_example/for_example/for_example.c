#include <stdio.h>

/*

for(expression1; expression2; expression3)
{

loop body;




}
  * If there is another loop inside of a loop this is named as nested loop






*/



int main()
{
	int i;
	printf("Enter a positive number: ");
	scanf_s("%d", &i);
	for (int n = 2; n <= i; n++)
	{
		if (i % n)
		{
			printf("%d is a prime number.", i);
			break;
		}
		else
		{
			printf("%d is not a prime number.", i);
			break;
		}
		
	}




	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	*/



/*
	for (int i = 0; i <= 10; i++)
	{


		printf("%d\n", i);


	}

	*/





}