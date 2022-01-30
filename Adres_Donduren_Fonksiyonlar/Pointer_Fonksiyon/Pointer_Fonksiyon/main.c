//33. ders
#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "nutility.h"

#define		SIZE		100

int a[5] = { 0,1,2,3,4 };

int* foo(void)
{

	//code
	return a;
}

int* get_int(void)
{
	int x;

	printf("bir tam sayi girin: ");
	scanf("%d", &x);
	return &x;//undefined
}

int* get_array_max(const int* pa, size_t size)
{
	int* pmax = (int *)pa;
	for (size_t i = 0; i < size; i++)
	{
		if (pa[i] > *pmax)
		{
			pmax = (int*)(pa + i);
		}
	}

	return pmax;
}

int* get_array_min(const int* pa, size_t size)
{
	int* pmin = (int*)pa;
	for (size_t i = 0; i < size; i++)
	{
		if (pa[i] > *pmin)
		{
			pmin = (int*)(pa + i);
		}
	}

	return pmin;
}

void selection_sort(int* p, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		swap(get_array_mi(p + 1, size - i), p + 1);
	}
}

int main()
{
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	int* pmax;
	int* pmin;

	pmax = get_array_max(a, SIZE);
	pmin = get_array_min(a, SIZE);
	//++foo()[2];//2.indeks 1 arttýrýldý

#pragma region get_int kullanýmý
	int* ptr;
	ptr = get_int();
	printf("girilen sayi: %d\n", *ptr);
#pragma endregion

#pragma region Const cast
	//int a[5] = { 0 };
	//const int primes[] = { 2,3,5,7,9,11,13 };
	//const int x = 10;
	//int y = 20;
	//int* pytr = &y;
	//const int* cp = &y;

	//&x ifadesinin türü const int *
	//&x ===> const int *
	//&y ===> int *
	//ptr ===> int *
	//cp ===> const int *
	//primes ===> const int *
	//a ===> int *

	const int x = 10;
	int* p = &x; //kesinlikle yanlýþ
#pragma endregion

#pragma region get_array_max
	int a[SIZE];
	
	printf("max = %d ve dizinin %d indisli elemani\n", *pmax, pmax - a);
	*pmax = -1; // DÝzinin en büyük elemaný
	print_array(a, SIZE);
#pragma endregion

#pragma region baþtan baþlayýp max deðere kadar sayýlrý yazdýran print_array deðerleri girmek
	print_array(a, pmax - a + 1);
#pragma endregion

#pragma region en büyük elemandan baþlayýp sonrakileri yazdýran print_array
	print_array(pmax, SIZE - (pmax - a));
#pragma endregion

#pragma region get_Array_min
	int a[SIZE];

	printf("max = %d ve dizinin %d indisli elemani\n", *get_array_min(a,SIZE));
#pragma endregion

#pragma region max ve min swap
	swap(get_array_max(a, SIZE), get_array_min(a, SIZE));
#pragma endregion

#pragma region pmin-pmax aralýðý yazma
	if (pmin > pmax)
		print_array(pmax, pmin - pmax + 1);
	else
		print_array(pmin, pmax - pmin + 1);
	//print_array(pmax < pmin ? pmax : pmin, abs(pmax - pmin) + 1); //koþul opt. ile
#pragma endregion

#pragma region Selection Sort
	selection_sort(a, SIZE);
#pragma endregion






}
