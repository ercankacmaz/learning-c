#define _CRT_SECURE_NO_WARNINGS


#include "date.h"
#include <stdio.h>



int main()
{
	/*Date x;

	set_date(&x, 2, 4, 1987);
	print_date(&x);
	
	set_date_today(&x);
	print_date(&x);

	set_date_str(&x, "06/05/1999");
	print_date(&x);*/

	/*Date mydate;

	for (int i = 0; i < 100; i++)
	{
		set_date_random(&mydate);
		print_date(&mydate);
	}*/


	Date y;
	printf("Dogum tarihini giriniz: ");
	scan_date(&y);
	print_date(&y);

}