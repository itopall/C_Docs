#define _CRT_SECURE_NO_WARNINGS


#include "date.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define		PRIVATE					static
#define		PUBLIC	
#define		YEARBASE				1900	
#define		RRANDOM_YEAR_MAX		1940
#define		RRANDOM_YEAR_MIN		2021

#define		isleap(y)				((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0))
#define		mon_day(y,m)			(daytabs[isleap(y)][m])

PRIVATE const int daytabs[][13] = {
	{0, 31,28,31 ,30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31,29,31 ,30, 31, 30, 31, 31, 30, 31, 30, 31},
};


PRIVATE int is_valid_date(int d, int m, int y);
PRIVATE Date* set(Date *p,int d, int m, int y);
PRIVATE int	day_of_week(int d, int m, int y);
//public functions

PUBLIC Date* set_date(Date* p, int d, int m, int y)
{
	return set(p, d, m, y);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC Date* set_date_today(Date* p)
{
	time_t timer;
	time(&timer);
	struct tm* tptr = localtime(&timer);

	return set(p,tptr->tm_mday, tptr->tm_mon + 1, tptr->tm_year + 1900);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------
//04-02-1972
PUBLIC Date* set_date_str(Date* p, const char* str)
{
	int d =	atoi(str);
	int m =	atoi(str + 3);
	int y = atoi(str + 6);

	return set(p, d, m, y);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC Date* set_date_random(Date* p)
{
	int y = rand() % (RRANDOM_YEAR_MAX - RRANDOM_YEAR_MIN + 1) + RRANDOM_YEAR_MIN;
	int m = rand() % 12 + 1;
	int d = rand() % mon_day(y, m) + 1;

	return set(p, d, m, y);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC Date* set_month_day(Date* p, int day)
{
	return set(p, day, p->m, p->y);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC Date* set_month(Date* p, int mon)
{
	return set(p, p->d, mon, p->y);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC Date* set_year(Date* p, int year)
{
	return set(p, p->d, p->m, year);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

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
		"Aralik",
	};
	static const char* const pdays[] = {
		"Pazar",
		"Pazartesi",
		"Sali",
		"Carsamba",
		"Persembe",
		"Cuma",
		"Cumartesi",
	};

	printf("%02d %s %d %s\n", p->d, pmons[p->m], p->y, pdays[get_week_day(p)]);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PUBLIC int get_week_day(const Date* p)
{
	return day_of_week(p->d, p->m, p->y);
}

//private functions


PRIVATE int is_valid_date(int d, int m, int y)
{
	return y >= YEARBASE && m > 0 && m <= 12 && d > 0 && d <= mon_day(y, m);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PRIVATE Date* set(Date* p, int d, int m, int y)
{
	if (is_valid_date(d, m, y))
	{
		fprintf(stderr, "Gecersiz tarih olustu\n");
		exit(EXIT_FAILURE);
	}
	p->d = d;
	p->m = m;
	p->y = y;
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

PRIVATE int day_of_week(int d, int m, int y)
{
	return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}


