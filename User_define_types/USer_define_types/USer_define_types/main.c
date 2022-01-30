

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Data {
	int a, b, c;
	double dval;
};

//neler yaoýnýn elemaný olabliri.
//struct Data {
//	int x;
//	double y;
//	char str[40];
//	int* p;
//	int a[20];
//	int (*fp)(int);
//	int b[2][5];
//};

//neler olamaz
//function olamaz

// bununla
//struct Data {
//	int a, b;
//	double dval;
//}a,*p,b;

//bu ayný anlama geliyor
//struct Data a, * p, b;


struct {
	int a, b, c;
}x;

struct {
	int a, b, c;
}y;


struct Employee {
	int id;
	char name[20];
	char surname[24];
	double wage;
};

void func(struct Data* p) 
{
	p->a = 10;
	//(*p).a = 5;
}

int main()
{
#pragma region struct
	//struct Data mydata;

	//printf("sizeof(struct) = %zu\n", sizeof(struct Data));
#pragma endregion

#pragma region Struct object use 4 operator
	//struct Data mydata;
	//1 dot operator
	/*mydata.a;*/
	
	//2 sizeof operator
	//printf("sizeof(mydata) = %zu\n", sizeof(mydata));

	//3 address operator
	//&mydata; // türü struct data *

	//4 atama operatörü
	//mydata.x = 10;
	//mydata.y = 2.3;

	//struct Data db;
	//db = mydata;

#pragma endregion

#pragma region Yapýnýn elemanlarýna ilk deðer verme
	//struct Data  mydata = { 10,4.5,"ilker", 1,{1,2,3,4,5} };

	//printf("%d %lf %s %d %d", mydata.x, mydata.y, mydata.str,mydata.p,mydata.a[2]);

	//struct Data mydata = { .y = 2.4, .x = 13 , .a = { [4] = 5} };

	//printf("%d %lf %d", mydata.x, mydata.y, mydata.a[4]);

#pragma endregion

#pragma region mülakat sorusu
	//x = y; Error
#pragma endregion

#pragma region Employee struct
	//struct Employee x = { 1234, "ilker", "topal",98.34 };
	//struct Employee y;

	//struct Employee* p = &y;

	//printf("%d %s %s %lf\n", x.id, x.name, x.surname, x.wage);

	//*p = x; //y = x;
	//p->id = 10; // p pointer bir struct old. için ok operatörünün rahatça kullandýk
	//(*p).id = 10; //bu da ayný anlama geliyor üstteki ile
	//printf("%d %s %s %lf\n", y.id, y.name, y.surname, y.wage);
#pragma endregion




}