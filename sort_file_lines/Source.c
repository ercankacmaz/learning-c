#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void* cmp(const void* vp1, const void* vp2)
{
	return strcmp(*(const**)vp1, *(const**)vp2);
}


int main()
{
	FILE* f;

	if ((f = fopen("yeni1.txt", "r")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 1;
	}
	clock_t start = clock();
	char buf[200];
	char** p = NULL;
	int cnt = 0;

	while (fgets(buf, 200, f))
	{
		p = (char**)realloc(p, (cnt + 1) * sizeof(char*));

		if (!p)
		{
			fprintf(stderr, "Bellek yetersiz, alan tahsis edilemedi..!\n");
			return 2;
		}

		p[cnt++] = _strdup(buf);
	}

	qsort(p, cnt, sizeof(char*), cmp);

	clock_t end = clock();

	printf("Siralama %f saniyede bitti.\n", (double)(end - start) / CLOCKS_PER_SEC);

	(void)_getch();

	for (size_t i = 0; i < cnt; i++)
	{
		printf("[%03d]    %s", i, p[i]);
	}

	free(p);
	fclose(f);

}