

#ifndef DATE_H
#define DATE_H

typedef struct {
	int d, m, y;
}Date;

//set function / setters // mutators
Date* set_date(Date* p, int d, int m, int y);
Date* set_date_today(Date* p);
Date* set_date_str(Date* p,const char* str);
Date* set_date_random(Date* p);
Date* set_month(Date* p, int mon);
Date* set_year(Date* p, int year);
Date* set_month_day(Date* p, int mday);

//get function - getter - accessors
int get_year(const Date* p);
int get_month(const Date* p);
int get_month_day(const Date* p);
int get_week_day(const Date* p);
int get_year_day(const Date* p);


//input-output function
void print_date(const Date* p);
void scan_date(Date* p);

//utility function
int cmp_date(const Date*, const Date*);
int date_diff(const Date* p, const Date*);
Date* ndays_date(Date* pdest, const Date* psource, int n);


#endif // !DATE_H
