#include <stdio.h>
#include "nutility.h"
//func i�levi int t�r�nden bir nesnenin adres ile �a��r�lmal�
//void func(int* ptr)
//{
//	*ptr = 61;
//}


void foo(int* p, int* q)
{
	*p *= *q;
}
void func(int* a, int* b)
{
	*a += *b;
	foo(a, b);
}
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}

void iscan(int* ptr)
{
	int c;

	*ptr = 0;

	while ((c = getchar()) != '\n')
	{
		*ptr = *ptr * 10 + c - '0';
	}
}

int main()
{
	//int a = 5;
	//int* p1 = &a;
	//int* p2 = p1;
	//int* p3 = p2;

	//++* p1;
	//++* p2;
	//++* p3;
	//printf("%d", a);//A'n�n degeri 3 artt�r�ld�


#pragma region call by reference
	//int a = 45;

	//func(&a);

	//printf("a = %d\n", a);
#pragma endregion

#pragma region Swap kullan�m�
	//int x = 10;
	//int y = 19;
	//printf("x = %d y = %d\n", x, y);
	//swap(&x, &y);
	//printf("x = %d y = %d\n", x, y);
#pragma endregion

#pragma region Dizilerin ilk eleman�n takas�
	//int a[] = { 1,2,3 };
	//int b[] = { -1,-2,-3 };
	//swap(a, b);//dizilerin ilk elemanlar� de�i�tirilecek //swap(&a[0],&b[0]) da yaz�labilir.
#pragma endregion 

#pragma region Foo ve func kullan�m�
	//int x = 13;
	//int y = 3;

	//func(&x, &y);

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);
#pragma endregion

#pragma region kendi scanf fonk. kullan�m�
	int x;
	printf("Bir sayi giriniz: ");
	iscan(&x);
	printf("x = %d\n", x);
#pragma endregion





}