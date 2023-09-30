#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
	int c;
	int cnt;
}Data;


void* cmp(const void* vp1, const void* vp2)
{
	return ((const Data*)vp2)->cnt - ((const Data*)vp1)->cnt;
}

int main()
{
	FILE* f;

	Data a[26];

	for (int i = 0; i < 26; ++i)
	{
		a[i].c = 'A' + i;
		a[i].cnt = 0;
	}

	if ((f = fopen("source.c", "r")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 1;
	}

	int c;

	while ((c = fgetc(f)) != EOF)
	{
		if (isalpha(c))
		{
			++a[toupper(c) - 'A'].cnt;
		}
	}

	qsort(a, 26, sizeof(Data), cmp);

	fclose(f);

	for (size_t i = 0; i < 26; i++)
	{
		printf("source.c dosyasinda %c karakteri %d tane bulundu.\n", a[i].c, a[i].cnt);
	}

	

}