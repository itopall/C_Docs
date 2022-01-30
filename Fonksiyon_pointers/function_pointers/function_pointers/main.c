

#include <stdio.h>
#include <string.h>
#include "nutility.h"
#include <ctype.h>
#include <stdlib.h>

#define			SIZE		100

//1 fonksiyonun adresi nasýl elde edilir
// fonksiyonun simini adres op.'nün adresi yaparak

int func(int);
double foo(double, double);
int foo1(int);
int func1(int);
void func2(void)
{
	printf("func2 cagrildi\n");
}

void func3(void(*fp)(void))
{
	printf("func cagirildi ve func kendisine gonderilen adresteki fonksiyonu cagiriyor\n");
	fp();
}
void f1(void)
{
	printf("f1 cagrildi\n");
}
void f2(void)
{
	printf("f2 cagrildi\n");
}
void f3(void)
{
	printf("f3 cagrildi\n");
}

void print_chars(const char* fname, int(*fp)(int))
{
	puts(fname);
	for (int i = 0; i < 128; ++i)
	{
		if (fp(i))
		{
			printf("%c", i);
		}
	}
	printf("\n\n");
}

void a(void)
{
	printf("a fonksiyonu cagrildi\n");
}

void b(void)
{
	printf("b fonksiyonu cagrildi\n");
}

void (*gfptr)(void) = &a;

void func4(void)
{
	gfptr();
}

void set_func(void (*ft)(void))
{
	gfptr = ft;
}


//qsort icmp iþlevine neyle çaðrý yapacak
//dizinin 2 elemanýn adresi ile
int icmp(const void* vpx, const void* vpy)
{
	if (*(const int*)vpx > *(const int*)vpy)
		return 1;
	if (*(const int*)vpx < *(const int*)vpy)
		return -1;

	return 0;
}

int dcmp(const void* vpx, const void* vpy)
{
	double x = *(const double*)vpx;
	double y = *(const double*)vpy;

	//return x > y ? 1 : x < y ? -1 : 0;

	if (x > y)
		return 1;
	if (x < y)
		return -1;
	return 0;
}

//bubble sort algoritmasý ile sýralama yapan qsort benzeri parametrik yapýya sahip 
//bir fonksiyon tanýmlayýnýz

void gbsort(void* vpa, size_t size, size_t sz, int (*fp)(const void*, const void*))
{
	char* p = (char*)vpa;

	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t k = 0; k < size - 1 - i; ++k)
		{
			//eðer dizinin k indisli elemani k + 1 elemanýndan büyükse bu elemanlarý swap
			if (fp(p + k * sz, p + (k + 1) * sz) > 0)
			{
				gswap(p + k * sz, p + (k + 1) * sz, sz);
			}
		}
	}
		
}

void gprint(const void* vpa, size_t size, size_t sz, void(*fprint)(const void*))
{
	char* p = vpa;
	while (size--)
	{
		fprint(p);
		p += sz;
	}
}

void iprint(const void* vp)
{
	printf("%3d ", *(const int*)vp);
}


int main()
{
	//&func; // ifadesi func iþlevinin adresi anlamýna gelir.

	//func; // ==> &func

	//&func; // int (*)(int)
	//&foo; // double (*)(double,double)
	//&strcmp(); //int (*)(const cchar* ,const char *);
	//&strlen(); // size_t(*)(const char*)
	//int (*fp)(int) = &foo; // foo yazýlsa da geçerli;
	//fp = &func;

	/*int (*fp)(const char*, const char*) = &strcmp;
	size_t(*fptr)(const char*) = &strlen;
	void (*fpx)(const int*, size_t) = &print_array;*/

	//void (*fp)(void);

	//fp = f1;
	//fp();
	//fp = f2;
	//fp();
	//fp = f3;
	//fp();
	
	/*void (*fp)(void) = func;
	fp();
	(*fp)();*/ // neden tercih ediliyor //fp bir function pointer vurgulanýyor.

#pragma region func3
	func3(&f1);
#pragma endregion


#pragma region print_chars()
	print_chars("isupper", &isupper);
#pragma endregion

#pragma region set_func()
	func4();
	set_func(&b);
	func4();
#pragma endregion

#pragma region qsort()
	//int a[SIZE];

	//randomize();
	//set_array_random(a, SIZE);
	//print_array(a, SIZE);

	//qsort(a, SIZE, sizeof(int), &icmp);

	//print_array(a, SIZE);
#pragma endregion

#pragma region qsort() for double

	double a[] = { 3.4,5.3,1.2,6.5,4.9,9.1,8.4,7.2,4.3,8.5 };

	qsort(a, asize(a), sizeof(double), &dcmp);
	for (size_t i = 0; i < asize(a); ++i)
		printf("%f\n", a[i]);

#pragma endregion

#pragma region gbsort()
	//int a[SIZE];
	//randomize();
	//set_array_random(a, SIZE);

	//gbsort(a, SIZE, sizeof(int), &icmp);
#pragma endregion

#pragma region gprint - iprint
	int a[SIZE];

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	gprint(a, SIZE, sizeof(int), &iprint);
#pragma endregion





}