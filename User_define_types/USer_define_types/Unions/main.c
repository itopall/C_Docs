



#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "date.h"
#include "nutility.h"


#define			INT			0
#define			DOUBLE		1
#define			NAME		2
#define			DATE		3


//typedef union Data {
//	int x, y;
//	double d;
//	char s[16];
//}Data;


/*typedef struct {
	int i,j,k;
	double d;
	char c[10];
}Snec;*/	

typedef union {
	int i,j,k;
	double d;
	char c[10];
}Unec;

typedef struct {
	uint16_t low_bytes;
	uint16_t high_bytes;
}Myint;

typedef union
{
	uint32_t uval;
	Myint m;
}Utype;

//kullaným temasý2
//typedef struct {
//	uint32_t id;
//	char name[32];
//	double wage;
//	union {
//		struct {
//			int mil_st;
//			char place[20];
//			int deg;
//		};
//		char mainden_name[32];
//	};
//}Data;


//kullaným temasý 3
typedef struct {
	int type;
	union {
		int ival;
		double dval;
		char name[32];
		Date date;

	};
}Data;


void set_data_random(Data* p)
{
	switch (rand() % 4) {
	case INT	: p->type = INT; p->ival = rand(); break;
	case DOUBLE	: p->type = DOUBLE; p->dval = (double)rand() / RAND_MAX; break;
	//case NAME	: p->type = NAME; strcpy(p->name, random_name; break;
	case DATE: p->type = DATE; set_date_random(&p->date); break;

	}
}

void display_data(const Data* p)
{
	switch (p->type) {
	case INT	: printf("(%d)\n", p->ival); break;
	case DOUBLE	: printf("(%f)\n", p->dval); break;
	case NAME	: printf("(%s)\n", p->name); break;
	case DATE	: print_date(&p->date); break;
	}
}


int main()
{
	//Data mydata, * p = &mydata;
	
	/*mydata.x;
	p->d;*/

#pragma region Struct vs Union
	//printf("sizeof(Snec) = %zu\n", sizeof(Snec));
	//printf("sizeof(Unec) = %zu\n", sizeof(Unec));
#pragma endregion

#pragma region Union
	//printf("sizeof(Unec) = %zu\n", sizeof(Unec));
	//Unec nec;

	//printf("&nec		= %p\n", &nec);
	//printf("&nec.i		= %p\n", &nec.i);
	//printf("&nec.j		= %p\n", &nec.j);
	//printf("&nec.k		= %p\n", &nec.k);
	//printf("&nec.d		= %p\n", &nec.d);
	//printf("&nec.c		= %p\n", nec.c);
#pragma endregion

#pragma region Kullaným temasý 3
	Data mydata = { .type = DOUBLE, .dval = 3.4 };
	mydata.type = NAME;
	strcpy(mydata.name, "ilker");

	switch (mydata.type) {
	case INT: mydata.ival;
	case DOUBLE: mydata.dval;
	}
#pragma endregion

#pragma region set_data_random
	randomize();

	Data mydata;
	while (1)
	{
		set_data_random(&mydata);
		display_data(&mydata);
	}

#pragma endregion






}