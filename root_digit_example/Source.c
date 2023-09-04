#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



int root_digit(int num)
{
	int root_digit = 0;

	while (num)
	{
		root_digit += num % 10;
		num /= 10;
		if (!num && root_digit > 10)
		{
			num = root_digit;
			root_digit = 0;
		}
			
	}
	return root_digit;
}




int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("%d root digit is %d..!\n", num, root_digit(num));



	return 0;
}