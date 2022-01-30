//32.ders


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef int* IPTR;

typedef const int* CIPTR;
int main()
{
	//IPTR p1, p2; 

	//int x = 12;
	//int y = 23;

	//CIPTR p1 = &x, p2 = &y;
	//p1 ve p2 const int*

#pragma region Dizilerde Typedef kullanýmý
	typedef int INTA10[10]; //INTA10 int[10] türünden  eþ isim oldu
	INTA10 a, b, c; //int a[10] b[10] c[10]
#pragma endregion

#pragma region mülakat sorusu
	//typedef int* IPTR;
	//int x = 4;
	//int y = 3;

	//const IPTR ptr = &x;
	////ptr = &y;   //geçersiz
	//*ptr = 40;

	//typedef const int* CPTR;

	//int x = 10;
	//int y = 20;
 //
	//CPTR p = &x;
	//p = &y;
	//*p = 45; // geçersiz
#pragma endregion



}