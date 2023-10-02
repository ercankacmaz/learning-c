#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>
#include <time.h>

int is_prime(int x)
{
	int i;
	for (i = 2; i <= x / 2 && x % i != 0; i++)
		;

	if (i <= x / 2)
		return 0;

	return 1;
}

int main()
{
	FILE* f;

	if ((f = fopen("prime_num.dat", "wb")) == NULL)
	{
		fprintf(stderr, "Dosya olusturulamadi..!\n");
		return 1;
	}

	int x = 2;
	int cnt = 0;
	clock_t start = clock();

	while (cnt < 10000)
	{
		if (is_prime(x))
		{
			fwrite(&x, sizeof(int), 1, f);
			++cnt;
		}
		++x;
		
	}
	clock_t end = clock();

	fclose(f);

	printf("Yazma islemi %f saniyede bitti..!\n", (double)(end - start) / CLOCKS_PER_SEC);

	FILE* fn;

	if((fn = fopen("prime_num.dat", "rb")) == NULL)
	{
		fprintf(stderr, "Dosya acilamadi..!\n");
		return 2;
	}

	int y;

	while (fread(&y, sizeof(int), 1, fn))
	{
		printf("%d, ", y);
		_getch();
	}

	fclose(f);
}