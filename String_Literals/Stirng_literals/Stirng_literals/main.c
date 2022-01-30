#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

#define		SIZE		100


const char* weekday(int day_no)
{
	switch (day_no)
	{
	case 1: return "Monday";
	case 2: return "Tuesday";
	case 3: return "Wednesday";
	case 4: return "Thursday";
	case 5: return "Friday";
	case 6: return "Saturday";
	case 7: return "Sunday";
	}
	return "";
}

void func(const char* ptr)
{
	printf("[3] %zu\n", sizeof(*ptr));
}

int main()
{
#pragma region Undefined behaivor
	//char* p = "kaya";
	//*p = 'M'; //Ub
#pragma endregion

#pragma region string kütüphanesiyle kullanýmý
	//char str[SIZE];

	//strcpy(str, "mustafa"); // geçerli

	//char* p = "musa";
	//strcat(p, "can"); // ub

	/*char str[SIZE];
	printf("bir yazi giriniz: ");
	sgets(str);

	if (!strcmp(str, "huseyin")) {

	}*/

	//char* p = "utku";

	//*p = 'e'; // ub
	//p[3] = 'i';

	//puts(p);

	//const char* p = "erdinc kaya";
	//char str[100] = "ilyas";

	//printf(p);
	//printf(str);

#pragma endregion

#pragma region Soru
	const char* p1 = "firat";
	const char* p2 = "firat";

	if (p1 == p2)
		printf("Dogrudur\n");
	else
		printf("yanlistir\n");
#pragma endregion

#pragma region Mülakat sorusu
	//char str[] = "mustafa"; //programýn sonuna kadar kalacak bir string literali söz konusu deðil
	//const char* p = "melahat"; // böyle yazýlmasý daha iyi //burada ise söz konusu.
#pragma endregion

#pragma region örnek kullanýmlar
	//char old_file_name[SIZE];
	//char new_file_name[SIZE];

	//printf("eski dosya ismini giriniz: ");
	//scanf("%s", old_file_name);

	////1 old_file_name'deki dosya ismini new_file_name dizisine kopyalayýn
	//strcpy(new_file_name, old_file_name);
	////2 eger dosya uzantisi yok ise uzanti olarak .dat uzantisi olacak þekilde getirin
	//char* p = strrchr(new_file_name, '.');
	//if (p == NULL)
	//{
	//	strcat(new_file_name, ".dat");
	//}
	////3.eðer dosya uzantisi .xls ise uzantiti .doc olarak deðiþtrin
	//else if (!strcmp(p, ".xls"))
	//	strcpy(p, ".doc");
	////4 eger dosya uzantisi .jpg ise uzantiyi silin.
	//else if (!strcmp(p, ".jpg"))
	//	*p = '\0';
	////5 bunlarin disindaki dosya isimleri icin uzantiyi .txt yapin
	//else
	//	strcpy(p, ".txt");



	//printf("(%s) ==> (%s)", old_file_name, new_file_name);

	
#pragma endregion

#pragma region Çift týrnak kullanýmý
	//const char* p = "";
	//printf("%zu\n", strlen(p));
	//printf("%zu\n", sizeof(""));
	//printf("%zu\n", sizeof(p));
#pragma endregion

#pragma region Sizeof sorularý
	//const char* p = "taylan";

	//printf("[1] %zu\n", sizeof(*p));
	//printf("[2] %zu\n", sizeof(p));
	//func("ilker");
	//printf("[4] %zu\n", sizeof(p++));
	//printf("[5] %zu\n", strlen(p));
#pragma endregion

#pragma region uzun string literali
	
	//1. yol
	puts("merhaba dunya \
nasilsin dunya");

	//2.yool 
	const char* p = "ilker "
					"topal "
					"amasya ";
	puts(p);
#pragma endregion









}