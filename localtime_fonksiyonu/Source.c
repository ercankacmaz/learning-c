#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>

/*
struct tm* localtime(const time_t* p)

bu fonksiyon struct tm isimli statik ömürlü bir yapýný adresini döndürüyor. Fonksiyona argüman olarak takvim zamanýný tutan bir deðiþkenin adresi geçiliyor.

*/



int main()
{
	time_t sec; 
	for (;;)
	{
		time(&sec);

		struct tm* p = localtime(&sec);

		printf("Tarih: %d/%d/%d, Saat: %d.%d.%d\r ", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900, p->tm_hour, p->tm_min, p->tm_sec);
	}

}