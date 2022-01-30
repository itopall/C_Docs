#define	_CRT_SECURE_NO_WARNINGS

#include "student.h"
#include "nutility.h"
#include <string.h>
#include <stdlib.h>

void set_student_random(Student* p)

{
	p->no = rand() % 10000;    
	strcpy(p->name, random_name());
	strcpy(p->surname, random_surname());
	strcpy(p->town, random_town());
	set_date_random(&p->bdate);
}


void print_student(const Student* p)
{
	printf("%-5d %-12s %-16s %s ", p->no, p->name, p->surname, p->town);
	print_date(&p->bdate);
}

int cmp_student(const Student*p1, const Student* p2)
{
	//ismi büyük olan büyüktür
	//soy ismi büyük büyük
	//þehre
	//doðum tarihi
	//numara

	int cmp_result = strcmp(p1->name, p2->name);

	if (cmp_result)
		return cmp_result;

	cmp_result = strcmp(p1->surname, p2->surname);

	if (cmp_result)
		return cmp_result;

	cmp_result = strcmp(p1->town, p2->town);

	if (cmp_result)
		return cmp_result;

	cmp_result = cmp_date(&p1->bdate, &p2->bdate);

	if (cmp_result)
		return cmp_result;

	return p1->no - p2->no;
}
