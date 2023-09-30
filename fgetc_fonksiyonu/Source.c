#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>



int main()
{
	FILE* f = fopen("source.c", "r");

	if (!f)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 1;
	}

	int c;

	while ((c = fgetc(f)) != EOF)
	{
		putchar(c);
	}

	fclose(f);
}