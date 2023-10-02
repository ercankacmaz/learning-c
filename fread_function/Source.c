#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>




int main()
{
	FILE* fn;

	if ((fn = fopen("prime_num.dat", "rb")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 2;
	}

	int y;

	while (fread(&y, sizeof(int), 1, fn))
	{
		printf("%5d ", y);
		_getch();
	}

	fclose(fn);
}