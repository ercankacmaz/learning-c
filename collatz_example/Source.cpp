#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


void print_collatz(unsigned long long x)
{
	while (x != 1)
	{
		if (x % 2 == 1)
		{
			x = 3 * x + 1;
		}
		else
		{
			x /= 2;
		}

		printf("%llu ", x);
	}
}

int main()
{

	unsigned long long x;

	printf("Bir sayi giriniz: ");
    scanf("%llu", &x);
	
	print_collatz(x);


	return 0;
}