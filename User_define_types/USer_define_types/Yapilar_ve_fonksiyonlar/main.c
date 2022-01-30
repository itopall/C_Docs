

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include "nutility.h"

#define		SIZE		10000

struct Data {
	int x, y;
	double dval;
};


//void f1(struct Data);
//
//
//
//
//struct Data* func(void);

void wait(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		;
}


int main() 
{
#pragma region foksiyona parametre gönderme

	//struct Data y = { 1,3,5.3 };
	//f1(y);
#pragma endregion

#pragma region Fonksiyonun geri dönüþ deðeri struct
	//struct Data* p = func();
#pragma endregion

#pragma region time using
	//time_t timer;
	//time(&timer);

	//struct tm tm = *localtime(&timer);

	//printf("(%s)", ctime(&timer));
	//printf("(%s)", asctime(&tm));
#pragma endregion

#pragma region strftime using

	//setlocale(LC_ALL, "turkish");

	//char str[SIZE];

	//time_t timer;
	//time(&timer);
	//struct tm* p = localtime(&timer);

	////strftime(str, SIZE, "%A %B %Y", p);
	//size_t n = strftime(str, SIZE, "%A %B %Y", p);

	//printf("%s", str);

#pragma endregion

#pragma region clock()

	//int a[SIZE];


	//clock_t start = clock();
	//set_array_random(a, SIZE);
	//sort_array(a, SIZE);
	//clock_t end = clock();

	//printf("siralama bitti %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);
	//getchar();
	//print_array(a, SIZE);


#pragma endregion

#pragma region wait() using 
	//for (int i = 0; i < 100; ++i)
	//{
	//	printf("%d ", i);
	//	wait(0.5);
	//}
#pragma endregion
#pragma region DAy_of_week
	printf("%d", day_of_week(21, 12, 2021));
#pragma endregion




	
}