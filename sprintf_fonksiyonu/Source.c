#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>



#define      SIZE    100


int main()
{
	char name[] = "ercan";
	char surname[] = "kacmaz";
	int bd = 1999;

	char file_name[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		sprintf(file_name, "%s_%s_%2d_%03d.jpg", name, surname, bd % 100, i + 1);
		printf("%s", file_name);
		(void)getchar();

		
	}
}