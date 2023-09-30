#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define   PRIVATE           static
#define   PUBLIC    
#define   YEARBASE          1900
#define   MINYEAR           1940
#define   MAXYEAR           2025
#define   isleap(y)         ((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0)) 
#define   mon_day(y, m)     (daytabs[isleap(y)][m])


PRIVATE const int daytabs[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
}; 


PRIVATE int is_valid_date(int d, int m, int y);
PRIVATE Date* set(Date* p, int d, int m, int y);
PRIVATE int day_of_week(int d, int m, int y);
PRIVATE int totaldys(const Date* p);
PRIVATE to_date(Date* p, int tdays);




//public functions

PUBLIC Date* set_date(Date* p, int d, int m, int y)
{
	return set(p, d, m, y);
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


PUBLIC Date* set_date_today(Date* p)
{
	time_t timer;
	time(&timer);
	struct tm* tptr = localtime(&timer);
	return set(p, tptr->tm_mday, tptr->tm_mon + 1, tptr->tm_year + 1900);

}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

//04-02-1987
PUBLIC Date* set_date_str(Date* p, const char* pstr)
{
	int d = atoi(pstr);
	int m = atoi(pstr + 3);
	int y = atoi(pstr + 6);


	return set(p, d, m, y);
}


//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
PUBLIC Date* set_date_random(Date* p)
{
	int y = rand() % (MAXYEAR - MINYEAR + 1) + MINYEAR;
	int m = rand() % 12 + 1;
	int d = rand() % mon_day(y, m) + 1;
	return set(p, d, m, y);
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


PUBLIC Date* set_moth_date(Date* p, int mday)
{
	return set(p, mday, p->mm, p->my);
}


PUBLIC Date* set_month(Date* p, int mon)
{
	return set(p, p->md, mon, p->my);
}


PUBLIC Date* set_year(Date* p, int year)
{
	return set(p, p->md, p->mm, year);
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

PUBLIC void print_date(const Date* p)
{
	static const char* const pmons[] = {
		"",
		"Ocak",
		"Subat",
		"Mart",
		"Nisan",
		"Mayis",
		"Haziran",
		"Temmuz",
		"Agustos",
		"Eylul",
		"Ekim",
		"Kasim",
		"Aralik"
	};
	static const char* const pdays[] = {
		"Pazar",
		"Pazartesi",
		"Sali",
		"Carsamba",
		"Persembe",
		"Cuma",
		"Cumartesi"
	};

	printf("%02d %s %d %s\n", p->md, pmons[p->mm], p->my, pdays[get_wday(p)]);

}

PUBLIC Date* scan_date(Date* p)
{
	int d, m, y;
	int retval = scanf("%d%d%d", &d, &m, &y);

	if (retval != 3)
	{
		fprintf(stderr, "giris isleminde hata..!\n");
		exit(EXIT_FAILURE);
	}

	return set(p, d, m, y);
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

PUBLIC int get_wday(const Date* p)
{
	return day_of_week(p->md, p->mm, p->my);
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

PUBLIC int cmp_date(const Date* p1, const Date* p2)
{
	if (p1->my != p2->my)
	{
		return p1->my - p2->my;
	}
	if (p1->mm != p2->mm)
	{
		return p1->mm - p2->mm;
	}

	return p1->md - p2->md;
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

PUBLIC int get_year(const Date* p)
{
	return p->my;
}

PUBLIC int get_month(const Date* p)
{
	return p->mm;
}
PUBLIC int get_mday(const Date* p)
{
	return p->md;
}

PUBLIC int get_yday(const Date* p)
{
	int sum = p->md;

	for (int i = 1; i < p->md; ++i)
	{
		sum += mon_day(p->my, i);
	}

	return sum;
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int date_dif(const Date* p1, const Date* p2)
{
	return totaldys(p1) - totaldys(p2);
}


//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------


PUBLIC Date* ndays_date(Date* pdest, const Date* psource, int n)
{
	return to_date(pdest, totaldys(psource + n));
}




//private functions

PRIVATE int is_valid_date(int d, int m, int y)
{

	return y >= YEARBASE && m > 0 && m <= 12 && d > 0 && d <= mon_day(y, m);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------


PRIVATE Date* set(Date* p, int d, int m, int y)
{
	if (!is_valid_date(d, m, y))
	{
		fprintf(stderr, "gecersiz tarih olustu..!\n");
		exit(EXIT_FAILURE);
	}

	p->md = d;
	p->mm = m;
	p->my = y;

	return p;
}

PRIVATE int day_of_week(int d, int m, int y)
{
	return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}


PRIVATE int totaldys(const Date* p)
{
	int sum = get_yday(p);

	for (int i = YEARBASE; i < p->my; ++i)
	{
		sum += isleap(i) ? 366 : 365;
	}

	return sum;
}

PRIVATE to_date(Date* p, int tdays)
{
	int y = YEARBASE;

	while (y > (isleap(y, m) ? 366 : 365))
	{
		tdays -= (isleap(y, m) ? 366 : 365);
		++y;
	}

	int m = 1;

	while (m > mon_day(y, m))
	{
		tdays -= mon_day(y, m);
		++m;
	}

	int d = tdays;

	return set(p, d, m, y);
}