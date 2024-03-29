#ifndef  DATE_H
#define DATE_H


typedef struct {
	int md;
	int mm;
	int my;
}Date;

//set functions / setter / mutators

Date* set_date(Date* p, int d, int m, int y);
Date* set_date_today(Date* p);
Date* set_date_str(Date* p, const char* pstr);
Date* set_date_random(Date* p);
Date* set_moth_date(Date* p, int mday);
Date* set_month(Date* p, int mon);
Date* set_year(Date* p, int year);


//get functions / getters / accessors  ->olu�turdu�umuz yap� nesnesine d��ar�dan eri�im engelli oldu�u i�in
//bu fonksiyonlar yard�m� ile eri�ece�iz

int get_year(const Date* p);
int get_month(const Date* p);
int get_mday(const Date* p);
int get_wday(const Date* p);  // 0 pazar, 1 pazartesi, ...
int get_yday(const Date* p);



//input output functions

void print_date(const Date* p);
Date* scan_date(Date* p);


//utility functions

int cmp_date(const Date*, const Date*);
int date_dif(const Date*, const Date*);
Date* ndays_date(Date* pdest, const Date* psource, int n);






#endif // ! DATE_H
