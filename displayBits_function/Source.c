#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void displayBits(unsigned value)
{
	unsigned c;

	unsigned displayMask = 1 << 31;  //31 bit sola kaydýrma

	printf("%u\n", value);

	for (c = 1; c <= 32; ++c)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;

		if (c % 8 == 0)
		{
			putchar(' ');
		}
	}

	putchar('\n');
}


int main()
{
	unsigned x;

	printf("Bir deger giriniz: ");
	(void)scanf("%u", &x);

	displayBits(x);
}