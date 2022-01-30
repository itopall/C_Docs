


#include <stdio.h>
#include <string.h>
#include "nutility.h"
#include <ctype.h>
#include <stdlib.h>

#define			SIZE		100

typedef int (*FTEST)(int);

int square(int x)
{
	return x * x;
}

int main()
{
	FTEST a[] = { &isupper,&islower,&isalpha, &isdigit, &isalnum, &isxdigit, &ispunct, &isspace, &isblank, &isprint, &isgraph, &iscntrl };
	const char* pa[] = { "isupper","islower","isalpha", "isdigit", "isalnum", "isxdigit", "ispunct", "isspace", "isblank", "isprint", "isgraph", "iscntrl"};


#pragma region ex1
	//int ch;

	//printf("bir karakter girini: ");
	//ch = getchar();
	//for (size_t i = 0; i < asize(a); ++i)
	//{
	//	if (a[i](ch)) //if (*a[i](ch))
	//		printf("%s icin OK", pa[i]);
	//	else
	//		printf("%s icin NOT OK\n", pa[i]);
	//}
#pragma endregion

#pragma region Mülakat sorusu
	int ch;

	char entry[40];
	printf("bir karakter girin: ");
	int ch = getchar();
	printf("hangi test fonksiyonu cagrilsin: ");
	scanf("%s", entry);

	size_t idx;

	for (idx = 0; idx < asize(pa) && strcmp(pa[idx], entry); ++idx)
		;

	if (idx == asize(pa))
		printf("%s islevi mevcut degil\n", entry);
	else if (a[idx](ch))
		printf("%s testi %c karakteri icin OK\n", entry, ch);
	else
		printf("%s testi %c karakteri icin NOT OK\n", entry, ch);
#pragma endregion

#pragma region square()
	int (*fp)(int) = square;
	int (**fptr)(int) = &fp;

	int x = (*fptr)(20);

	printf("%d\n", x);
#pragma endregion


	
}