#include <stdio.h>
#include "nutility.h"
//func iþlevi int türünden bir nesnenin adres ile çaðýrýlmalý
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
	//printf("%d", a);//A'nýn degeri 3 arttýrýldý


#pragma region call by reference
	//int a = 45;

	//func(&a);

	//printf("a = %d\n", a);
#pragma endregion

#pragma region Swap kullanýmý
	//int x = 10;
	//int y = 19;
	//printf("x = %d y = %d\n", x, y);
	//swap(&x, &y);
	//printf("x = %d y = %d\n", x, y);
#pragma endregion

#pragma region Dizilerin ilk elemanýn takasý
	//int a[] = { 1,2,3 };
	//int b[] = { -1,-2,-3 };
	//swap(a, b);//dizilerin ilk elemanlarý deðiþtirilecek //swap(&a[0],&b[0]) da yazýlabilir.
#pragma endregion 

#pragma region Foo ve func kullanýmý
	//int x = 13;
	//int y = 3;

	//func(&x, &y);

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);
#pragma endregion

#pragma region kendi scanf fonk. kullanýmý
	int x;
	printf("Bir sayi giriniz: ");
	iscan(&x);
	printf("x = %d\n", x);
#pragma endregion





}