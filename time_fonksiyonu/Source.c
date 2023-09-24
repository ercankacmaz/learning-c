#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>





int main()
{
	time_t sec; //time fonksiyonun set edilmesi için time_t (benim sistemimde long long türünün typedefi) türünden bir deðiþken oluþturdum.
	time(&sec);//deðiþkenimin adresini fonksiyona argüman olarak geçtim. Fonksiyon epoch olarak belirlenmiþ tarihten beri geçen saniyeyi deðiþkene set etti.

	printf("sec = %lld\n", sec);
}