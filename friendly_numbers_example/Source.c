#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>



int are_friend(int x, int y)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 1; i <= x /2; ++i)
	{
		if (x % i == 0)
		{
			sum1 += i;
		}

	}
	for (int i = 1; i <= y / 2; ++i)
	{
		if (y % i == 0)
		{
			sum2 += i;
		}
	}

	if (sum1 == y && sum2 == x)
		return 1;
	else
	    return 0;
}




int main()
{
	int x, y;

	printf("Iki sayi giriniz: ");
	scanf("%d%d", &x, &y);

	if (are_friend(x, y))
		printf("%d ve %d arkadas sayilar!", x, y);
	else
		printf("%d ve %d arkadas sayilar degil!", x, y);


	return 0;
}