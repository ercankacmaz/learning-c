#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



int main()
{
	char str[] = "ercan kacmaz";

	char* p = (char*)memchr(str, 'm', 5);

	if (p)
	{
		printf("%d. indiste bulundu.\n", p - str);
		*p = '!';
		printf("%s", str);
	}
	else
	{
		
		printf("bulunamadi..!\n");
	}

	printf("-------------------------------------------------------------------\n\n");
     p = (char*)memchr(str, 'm', 12);

	 if (p)
	 {
		 printf("%d. indiste bulundu.\n", p - str);
		 *p = '!';
		 printf("%s", str);
	 }
	 else
	 {

		 printf("bulunamadi..!\n");
	 }

}