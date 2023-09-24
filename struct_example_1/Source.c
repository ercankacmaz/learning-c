#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


struct Employee {
	int id;
	char name[20];
	char surname[40];
	double wage;
	int age;
};




int main()
{
	struct Employee first;

	printf("Ilk calisanin idsini giriniz: ");
	(void)scanf("%d", &first.id);

	printf("Calisanin adini ve soyadini giriniz: ");
	(void)scanf("%s%s", first.name, first.surname);

	printf("Calisanin saatlik ucretini giriniz: ");
	(void)scanf("%lf", &first.wage);

	printf("Calisanin yasini giriniz: ");
	(void)scanf("%d", &first.age);


	printf("Ilk calisan %d idli, %d yasindaki, saatlik ucreti %.2f dolar olan %s %s'dir\n",first.id, first.age, first.wage, first.name, first.surname);
}