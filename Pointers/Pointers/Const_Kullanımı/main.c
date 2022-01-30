#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//const'un amacý
//kendimize yardýmcý olmak için
//okuyana yardýmcý oluyoruz
//derleyiciye yardýmcý oluyoruz

int main()
{
	//const int x = 45;//bu deðerin deðiþtirilemez olduðunu söyledik

	//const int a[] = { 2,5,6,7,8,9 };

/*	int x = 10;
	int y = 20;
	int* const ptr = &x;

	*ptr = 98;*/ // geçerli kod

	//ptr = &y; // geçersiz;

	//int x = 24;
	//int y = 30;
	//const int* ptr = &x;
	//int b = *ptr; // geçerli
	//ptr = &y;//geçerli

	int x = 10;
	const int* const ptr = &x;
	//const pointer to const int
	//top/low level 

}