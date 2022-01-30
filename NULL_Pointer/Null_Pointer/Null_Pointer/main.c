

#define		SIZE		100

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "nutility.h"

// bir tam sayý dizisinde bir deðeri arayan(linear arama yapan) search isimli fonksiyonu tanýmlayýnýz
int* search(const int* p, size_t size, int val)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (p[i] == val)
			return (int*)(p + i);
	}

	return NULL;
}
int* search2(const int* p, size_t size, int val)
{
	while (size--)
	{
		if (*p == val)
			return (int*)p;
		++p;
	}

	return NULL;
}
int main()
{
#pragma region NULL pointer
	//FILE* f = fopen("yok.txt", "r");

	//if (!f)
	//{
	//	printf("Dosya bulunamadi!\n");
	//	return 1; // programaýn iþini yapamamasý anlamýna geliyor return 1
	//}
#pragma endregion

	int a[SIZE];
	int ival;
	int* p;

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	printf("aranacak degeri giriniz: ");
	scanf("%d", &ival);

#pragma region Search Func. Using
	p = search(a, SIZE, ival);
	if (p)
		printf("bulundu... dizinin %d indisli elemani\n", p - a);
	else
		printf("bulunumadi...");
#pragma endregion




}