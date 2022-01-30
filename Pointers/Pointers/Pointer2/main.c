//30.ders 

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void get_circle_area(double radius, double* p_area)
{
	*p_area = 3.1415926 * radius * radius;
}

int main()
{
	double r;
	double area;

	printf("yaricap degerini giriniz: ");
	scanf("%lf", &r);
	get_circle_area(r, &area);

	printf("%f\n", area);
}