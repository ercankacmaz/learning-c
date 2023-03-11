#include<stdio.h>


int main()
{
	char aegean_region[][20] = { "Izmir", "Aydin", "Mugla", "Manisa", "Usak", "Denizli", "Kutahya", "Afyon" };

	for (int i = 0; i < 8; i++)
		printf("%s %p\n", aegean_region[i], &aegean_region[i]);
	printf("\n");

	char* p[] = { "Izmir", "Aydin", "Mugla", "Manisa", "Usak", "Denizli", "Kutahya", "Afyon" }; //array of pointers
	for (int i = 0; i < 8; i++)
	{
		printf("p[%d] = %s %p\n", i, p[i], &p[i]);
	}
}