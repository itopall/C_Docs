#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

#define		SIZE		100

int main()
{
	int a[SIZE];
	//b ve c dizileri merge algoritmas�nda kullanmak i�in
	//int b[SIZE];
	//int c[SIZE * 2];
	int sval;
	randomize();
	set_array_random(a, SIZE);
	//set_array_random(b, SIZE);
	sort_array(a, SIZE);
	//sort_array(b, SIZE);
	print_array(a, SIZE);
	//print_array(b, SIZE);

#pragma region Bubble sort
	//for (int i = 0; i < SIZE - 1; ++i)
	//{
	//	for (int j = 0; j < SIZE - 1 - i; ++j)
	//	{
	//		if (a[j] > a[j + 1])
	//		{
	//			int temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//		}
	//	}
	//}
#pragma endregion

#pragma region TEkleri ba�a �iftleri sona s�ralayan alg.
	//for (int i = 0; i < SIZE - 1; ++i)
	//{
	//	for (int j = 0; j < SIZE - 1 - i; ++j)
	//	{
	//		if ((a[j] % 2 == 0 && a[j + 1] % 2 != 0) || (a[j] % 2 == a[j + 1] % 2 && a[j] > a[j + 1]))
	//		{
	//			int temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//		}
	//	}
	//}
#pragma endregion

#pragma region Merge algoritmas�
	//int idx_a = 0;
	//int idx_b = 0;

	//for (int i = 0; i < SIZE * 2; ++i)
	//{
	//	if (idx_a == SIZE)
	//		c[i] = b[idx_b++];
	//	else if (idx_b == SIZE)
	//		c[i] = a[idx_a++];
	//	else if (a[idx_a] < b[idx_b])
	//		c[i] = a[idx_a++];
	//	else
	//		c[i] = b[idx_b++];
	//}
	//print_array(c, SIZE * 2);
#pragma endregion

#pragma region Binary Search Algoritmas�
	//printf("aranacak degeri giriniz: ");
	//scanf("%d", &sval);

	//int idx_first = 0;
	//int idx_last = SIZE - 1;
	//int idx_mid;
	//
	//while (idx_first <= idx_last)
	//{
	//	idx_mid = (idx_first + idx_last) / 2;
	//	if (a[idx_mid] == sval)
	//		break;

	//	if (a[idx_mid] > sval)
	//		idx_last = idx_mid - 1;
	//	else
	//		idx_first = idx_mid + 1;
	//}

	//if (idx_first > idx_last)
	//	printf("Aranan deger bulunamadi");
	//else
	//	printf("blundu dizinin %d indisli elemani.", idx_mid);
#pragma endregion

#pragma region Partition algoritmas�
	//Dizinin tekler ba�ta �iftler sonda olmak �zere b�l�mleyin ve hem b�l�mlenmi� diziyi hem de 
	//bartisyon noktas�n�n indeksini yazd�r�n
#pragma endregion

#pragma region Mod medyan
	//dizinin modunu ve medyan�n� bulunuz
#pragma endregion






	//print_array(a, SIZE);
}