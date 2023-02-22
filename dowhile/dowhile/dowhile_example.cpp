#include <stdio.h>

/*
* in this case even if the statement is false the  insede of the do will be running for 1 time.
do
{




}while(expression);





*/

int main()
{
	int x;
	int n = 0;
	
	printf("Enter a positive integer number: ");
	scanf_s("%d", &x);
	do {
		x /= 10;
	
		n++;

	} while (x > 0);
	printf("The number is %d digit.", n);




	/*int i;
	printf("Enter a number: ");
	scanf_s("%d", &i);
	do
	{
		printf("Number is: %d\n", i);
		i--;


	}
	while (0 < i);



	*/

}
