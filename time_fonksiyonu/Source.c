#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>





int main()
{
	time_t sec; //time fonksiyonun set edilmesi i�in time_t (benim sistemimde long long t�r�n�n typedefi) t�r�nden bir de�i�ken olu�turdum.
	time(&sec);//de�i�kenimin adresini fonksiyona arg�man olarak ge�tim. Fonksiyon epoch olarak belirlenmi� tarihten beri ge�en saniyeyi de�i�kene set etti.

	printf("sec = %lld\n", sec);
}