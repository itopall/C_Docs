#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <math.h>

#define			SIZE		20

int main()
{
	int a[SIZE];
	


	randomize();
	//set_array_random(a, SIZE);
	//print_array(a, SIZE);
	
#pragma region Elemanlarýn Toplamý
	//int sum = 0;
	////elemanlarýnýn toplamý
	//for (int i = 0; i < SIZE; ++i)
	//	sum += a[i];

	//printf("sum = %d\n", sum);
	////aritmetik ort
	//printf("ortalama = %f\n", (double)sum / SIZE);
#pragma endregion

#pragma region TEk sayýlarýn toplmaý ve ortalamasý
	//int odd_sum = 0;
	//int odd_cnt = 0;
	//for (int i = 0; i < SIZE; ++i)
	//{
	//	if (a[i] % 2 != 0)
	//	{ 
	//		odd_sum += a[i];
	//		++odd_cnt;
	//	}
	//}
	//if (odd_cnt)
	//	printf("teklerin ortalamasi = %f\n", (double)odd_sum / odd_cnt);
	//else
	//	printf("dizide tek sayi yok\n");
#pragma endregion

#pragma region Standart sapma hesaplama
	//int sum = 0;
	//double sum_square = 0;
	//double mean;
	//double std_dev;

	//for (int i = 0; i < SIZE; ++i)
	//	sum += a[i];
	//mean = (double)sum / SIZE;

	//for (int i = 0; i < SIZE; ++i)
	//	sum_square += (a[i] - mean) * (a[i] - mean);
	//
	//std_dev = sqrt(sum_square / (SIZE - 1));
	//printf("std. sapma = %f", std_dev);
#pragma endregion

#pragma region Dizinin en büyüðünü bulma
	//int max = a[0];
	//int max_idx = 0;
	//for (int i = 1; i < SIZE; ++i)
	//{
	//	if (a[i] > max)
	//	{
	//		max = a[i];
	//		max_idx = i;
	//	}
	//}
	//printf("max %d degerinde ve dizinin %d indisli elemani\n", max, max_idx);
#pragma endregion

#pragma region Min ve max bulma
	//int max = a[0];
	//int min = a[0];
	//for (int i = 1; i < SIZE; ++i)
	//{
	//	if (a[i] > max)
	//		max = a[i];
	//	else if (a[i] < min)
	//		min = a[i];
	//}
	//printf("max %d\n", max);
	//printf("min %d\n", min);
#pragma endregion

#pragma region Runner_Up
	//int max = a[0];
	//int runner_up = a[1];
	//if (a[0] < a[1])
	//	max = a[1], runner_up = a[0];
	//for (int i = 0; i < SIZE; ++i)
	//{
	//	if (a[i] > max)
	//	{
	//		runner_up = max;
	//		max = a[i];
	//	}
	//	else if (a[i] > runner_up)
	//		runner_up = a[i];
	//}
	//printf("runner_up = %d", runner_up);
#pragma endregion

#pragma region Degere sahip dizi elemaný bulma 1. yöntem
	//int sval;
	//int found = 0;
	//printf("aranacak degeri giriniz: ");
	//scanf("%d", &sval);
	//int i;
	//for (i = 0; i < SIZE; ++i)
	//{
	//	if (a[i] == sval)
	//	{
	//		found = 1;
	//		break;
	//	}
	//}
	//if (found) {
	//	printf("bulundu dizinin %d indisli elemani\n", i);
	//}
	//else
	//	printf("bulunamadi\n");
#pragma endregion

#pragma region Degere sahip dizi elemaný bulma 2. yöntem
	//int sval;
	//printf("aranacak degeri giriniz: ");
	//scanf("%d", &sval);
	//int i;
	//for (i = 0; i < SIZE; ++i)
	//{
	//	if (a[i] == sval)
	//	{
	//		break;
	//	}
	//}
	//if (i < SIZE) {
	//	printf("bulundu dizinin %d indisli elemani\n", i);
	//}
	//else
	//printf("bulunamadi\n");
#pragma endregion

#pragma region degere sahip dizi elemaný bulma Prof yöntem
	//int sval;
	//printf("aranacak degeri giriniz: ");
	//scanf("%d", &sval);
	//int i;
	//for (i = 0; i < SIZE && a[i] != sval; ++i)
	//	;
	//if (i < SIZE) {
	//	printf("bulundu dizinin %d indisli elemani\n", i);
	//}
	//else
	//printf("bulunamadi\n");
#pragma endregion

#pragma region Sizeof un Arraylerde kullanýmý
	/*char buf[200];
	int b[50];
	double da[25];

	printf("buf= %zu\n", sizeof(buf));
	printf("a= %zu\n", sizeof(b));
	printf("da= %zu\n", sizeof(da));*/
#pragma endregion

#pragma region Unique sayý arama
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 20;
		printf("%3d ", a[i]);
	}
	printf("\n\n");

	int i, k;

	for (i = 0; i < SIZE; ++i)
	{
		for (k = 0; k < SIZE; ++k)
			if (i != k && a[i] == a[k])
				break;
		if (k == SIZE)
			printf("%3d ", a[i]);
	}
#pragma endregion











	

}