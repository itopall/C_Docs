 



#include <stdio.h>
#include "nutility.h"



void f1(int(*p)[20], size_t size);
void f2(int(*p)[8], size_t size);
void f3(int(*p)[4], size_t size);

void set_random_20(int(*p)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (int k = 0; k < 20; ++k)
		{
			p[i][k] = rand() % 10;
		}
	}
}
void set_array_20(int(*p)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (int k = 0; k < 20; ++k)
		{
			printf("%d ", p[i][k]);
		}
		printf("\n");
	}
	printf("----------------------------------------");
}



typedef double* DARRAY[20];
int main()
{
	//int a[10][20]; //20 elemanlý 10 diziden oluþan bir dizi


	//prinf("sizeof(a) = %zu\n", sizeof(a));
	//prinf("sizeof(a) = %zu\n", sizeof(a[0]));
	//prinf("sizeof(a) = %zu\n", sizeof(a[0][0]));

	int a[10][20];
	//p pointer deðiþkenine a'nýn ilk elemanýnn ilk elemanýnýn adresiyle ilk deðer verin
	//int *p = &a[0][0];
	//int *p = a[0];
	//int *p = (int *)a;


#pragma region pointer'a atama'
	int a[10][4];
	int(*ptr)[4] = &a[0];
	//int(*ptr)[4] = a;

	for (int i = 0; i < 10; ++i)
	{
		printf("%p %p %p\n", a + i, &a[i], ptr);
		++ptr;
	}

#pragma endregion

#pragma region ilk deger atama

	int a[5][4] = {
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3},
		{4,4,4,4},
		{5,5,5,5},
	};

	for (int i = 0; i < 5; ++i)
	{
		for (int k = 0; k < 4; ++k)
			printf("%d ", a[i][k]);
		printf("\n"); 
	}



#pragma endregion

	//DARRAY a[10];
	//double a[10][20];


#pragma region Çok boyutlu dizileri parametre olarak kullanma

	//int a[10][20];
	//int b[5][8];
	//int c[6][4];

	//f1(a, 20);
	//f2(b, 8);
	//f3(c, 4);

#pragma endregion

#pragma region set_random_20 && print_array_20

	int a[10][20];

	randomize();
	set_random_20(a, 10);
	print_array(a, 10);

#pragma endregion

	
	

	



}