#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>




int main()
{
	FILE* fsource, * fdest, * fcopy;

	if ((fsource = fopen("source.c", "rb")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 1;
	}

	if ((fdest = fopen("source.txt", "wb")) == NULL)
	{
		fprintf(stderr, "Dosya olusturalamadi.");
		return 2;
	}

	int c;

	while ((c = fgetc(fsource)) != EOF)
	{
		fputc(c, fdest);
	}

	fclose(fsource);
	fclose(fdest);

	if ((fcopy = fopen("source.txt", "r")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 3;
	}

	while ((c = fgetc(fcopy)) != EOF)
	{
		putchar(c);
	}
	
}