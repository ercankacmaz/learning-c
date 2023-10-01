#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>



int main()
{
	FILE* f;

	if ((f = fopen("deneme.txt", "w")) == NULL)
	{
		fprintf(stderr, "Dosya olusturulamadi..!\n");
		return 1;
	}

	for (size_t i = 0; i < 26; i++)
	{
		fputc('A' +i, f);
	}

	fclose(f);

}