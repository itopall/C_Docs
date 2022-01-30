//31.ders

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>
#include "nutility.h"

#define			SIZE		100


//void printfArray(const int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}

//void printfArray(const int* p, int size)
//{
//	while (size--)
//	{
//		printf("%d", *p);
//		++p;
//	}
//	printf("\n"); 
//}

//elemanlarý int türünden bir dizinin elemanlarýnýn toplamaný hesaplayan bir C fonk. yazýnýz.
//int sum_array(const int* p, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		sum += p[i];
//	}
//
//	return sum;
//}
int sum_array(const int* p, int size)
{
	int sum = 0;
	while (size--)
		sum += *p++;

	return sum;
}

double get_mean(const int* p, int size)
{
	return (double)sum_array(p, size) / size;
}

double get_std_dev(const int* p, int size)
{
	double mean = get_mean(p, size);
	double sum_square = 0;

	for (int i = 0; i < size; ++i)
	{
		sum_square += (p[i] - mean) * (p[i] - mean);
	}

	return sqrt(sum_square / (size - 1));
}

int get_array_max(const int* p, int size)
{
	int max = *p;

	for (int i = 1; i < size; ++i)
	{
		if (p[i] > max)
			max = max;
	}

	return max;
}

void get_min_max(const int* pa, int size, int* pmin, int* pmax)
{
	*pmin = *pmax = *pa;
	for (int i = 1; i < size; ++i)
	{
		if (pa[i] > *pmax)
			*pmax = pa[i];
		else if (pa[i] < *pmin)
			*pmin = pa[i];
	}
}

void copy_array(int* pdest, const int* psource, int n)
{
	for(int i = 0; i < n; ++i)
	{
		pdest[i] = psource[i];
	}
}

#pragma region Copy arraya alternatif(Genelde kullanýlan)
//void copy_array(int* pdest, const int* psource, int n)
//{
//	while (n--)
//	{
//		*pdest++ = *psource++;
//	}
//}
#pragma endregion

void reverse_array(int* p, int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		//swap(&p[i], &p[size - 1 - i]);
		swap(p + i, p + size - 1 - i);
	}
}

void bubble_sort(int* p, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int k = 0; k < size - i; ++k)
		{
			if (p[k] > p[k + 1])
			{
				swap(p + k, p + k + 1);
			}
		}
	}
}

int main()
{
	//printArray(a ,SIZE);
	//Dizinin ilk 5 elemanýný yazdýr.
	//printArray(a,5);
	//Dizinin 6. elemanýndan baþlayarak 4 elemanýný yazdýrýn
	//printArray(a + 5,4);
	//SIZE makrosunu kullanarak dizinin son 5 elemanýný yazdýrýn
	//printArray(a + SIZE - 5 ,5);

	int a[SIZE];
	
	int min, max;

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

#pragma region elemanlarý int türünden bir dizinin elemanlarýnýn toplamaný hesaplayan bir C fonk.
	printf("toplam = %d\n", sum_array(a, SIZE));
#pragma endregion

#pragma region Ortalama hesaplama
	printf("ortalama = %f\n", get_mean(a, SIZE));
#pragma endregion

#pragma region Standart ssapma
	printf("std. sapma = %f\n", get_std_dev(a, SIZE));
#pragma endregion

#pragma region En büyük eleman
	printf("max = %d\n", get_array_max(a, SIZE));
#pragma endregion

#pragma region En büyük ve en küçük bulma
	get_min_max(a, SIZE, &min, &max);
	printf("min = %d\n", min);
	printf("max = %d\n", max);
#pragma endregion

#pragma region Dizi kopyalama
	//int b[SIZE];
	//copy_array(b, a, SIZE);
#pragma endregion

#pragma region A'dan B'ye kaç eleman kopyalanacak?
	//int b[SIZE] = { 0 };
	//int idx_a, idx_b, n;

	//printf("a'nin hangi indisli elemanindan baslayacak? ");
	//scanf("&d", &idx_a);
	//printf("b'nin hangi indisli elemanindan baslayacak? ");
	//scanf("&d", &idx_b);
	//printf("kac eleman kopyalanacak? ");
	//scanf("&d", &n);
	//copy_array(b + idx_b, a + idx_a, n);
#pragma endregion

#pragma region REverse Array
	reverse_array(a, SIZE);
#pragma endregion

#pragma region Bubble sort kullanýmý
	bubble_sort(a, 5);
#pragma endregion









}
