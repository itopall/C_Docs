#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//const'un amac�
//kendimize yard�mc� olmak i�in
//okuyana yard�mc� oluyoruz
//derleyiciye yard�mc� oluyoruz

int main()
{
	//const int x = 45;//bu de�erin de�i�tirilemez oldu�unu s�yledik

	//const int a[] = { 2,5,6,7,8,9 };

/*	int x = 10;
	int y = 20;
	int* const ptr = &x;

	*ptr = 98;*/ // ge�erli kod

	//ptr = &y; // ge�ersiz;

	//int x = 24;
	//int y = 30;
	//const int* ptr = &x;
	//int b = *ptr; // ge�erli
	//ptr = &y;//ge�erli

	int x = 10;
	const int* const ptr = &x;
	//const pointer to const int
	//top/low level 

}