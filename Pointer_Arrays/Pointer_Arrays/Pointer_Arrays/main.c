

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"
int a = 10;
int b = 20;
int c = 30;

//int a[] = { 2,3,4,5 };
//int b[] = { 1,3,5,7 };
//int c[] = { 10,20,30};

//double indirection
//double dereferencing
int main()
{
	//int* p[] = { &a, &b, &c };

	//**p = 77; // a deðeri 77 oldu.

	//for (int i = 0; i < 3; ++i)
	//{
	//	printf("%d\n", *p[i]);
	//}

	//int* p[] = { a,b,c };
	//p[1][2] = 76; //b nin ikinci elemanýný 76 yaptýk

	//++p[2];
	//++* p[2]; //c ' nin 2. elemaný bir arttý

#pragma region Const kullanýmý
	//int x = 45;
	//
	//int* const p[] = { &a, &b, &c }; //dizinin elemanlarýný deðiþtirilemez hale getirdik
	////p[1] = &x;
	//*p[1] = 65; // b ' nin kendi deðerini deðiþtiriyoruz

	//const int* p[] = { &a, &b,&c };

	//int ival = *p[1]; // geçerli
	////*p[1] = 23;//geçersiz
	//p[0] = &x; //geçerli;

#pragma endregion

	const char* const pmons[] = {
						   "ocak",
						   "þubat",
						   "mart",
						   "nisan",
						   "mayýs",
						   "haziran",
						   "temmuz",
						   "aðustos",
						   "eylül",
						   "ekim",
						   "kasým",
						   "aralýk" };

	/*for (size_t i = 0; i < asize(pmons); ++i)
	{
		printf("%s %zu\n", pmons[i], strlen(pmons[i]));
	}*/

	//int n;
	//printf("yilin kacinci ayi: ");
	//scnaf("%d", &n);
	//printf("yilin %d. ayi ayi = %s\n", n, pmons[n - 1]);

	//for (int i = 0; i < 12; ++i)
	//{
	//	printf("%p %s %zu\n", pmons[i], pmons[i], strlen(pmons[i]));
	//}

	char entry[40];

	printf("bir ay ismi giriniz: ");
	scanf("%s", entry);

	int i;

	for (int i = 0; i < 12 && strcmp(entry, pmons[i]); ++i)
		;

	if (i < 12)
		printf("%s yilin %d. ayi", entry, i + 1);
	else
		printf("%s geçerli bir ay ismi degil\n", entry);


};