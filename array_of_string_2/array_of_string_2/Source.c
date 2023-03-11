#include<stdio.h>





int main()
{


	char city[20];
	const char* const aegean_cities[] = { "Izmir", "Aydin", "Mugla", "Manisa", "Usak", "Denizli", "Kutahya", "Afyon" };
	printf("Enter a city: ");
	scanf("%s", city);

	for (int i = 0; i < 8; i++)
	{
		if (city == aegean_cities[i])
		{
			printf("The city belongs to Aegean Region\n");
		}
		else
		{
			printf("The city doesn't belongs to Aegean Region\n");
		}
	}






}