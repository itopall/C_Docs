

#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include "myctype.h"


#define		ARCHIVE			1
#define		SYSTEM			2
#define		READ_ONLY		4
#define		HIDDEN			8
#define		DIRECTORY	   16


struct file_prop {
	size_t length;
	char name[20];

	unsigned int flags;
};

struct file_prop* get_file_prop(void);

//bitfield member
//typedef struct  {
//	unsigned int x : 3; //iki noktadan sonraki kýsým bellekte kaç bitlik bir alanda tutulacaðý gösteriyor
//	unsigned int y : 5;
//	unsigned int z : 2;
//}Data;

struct Date{
	unsigned int mday : 5;
	unsigned int mon : 4;
	unsigned int year : 7; // 0 - 127
};

struct Time {
	unsigned int hour : 5;
	unsigned int min : 6;
	unsigned int sec : 5;
};

typedef union  {
	uint32_t uval;
	struct {
		unsigned int mday : 5;
		unsigned int mon : 4;
		unsigned int year : 7; // 0 - 127
		unsigned int hour : 5;
		unsigned int min : 6;
		unsigned int sec : 5;
	};

}DateTime;

//typedef struct  {
//	unsigned int mday : 5;
//	unsigned int mon : 4;
//	unsigned int year : 7; // 0 - 127
//	unsigned int hour : 5;
//	unsigned int min : 6;
//	unsigned int sec : 5;
//}DateTime;

int main()
{
#pragma region baþlangýç
//	struct file_prop* p = get_file_prop();
//
//	p->flags |= READ_ONLY; // ilgili biti read only yaptýk
//	p->flags &= ~READ_ONLY; // read only'den çýkarmkak içinde ifadeyi kullandýk
#pragma endregion

#pragma region lookuptable oluþturduk
	//for (int i = 0; i < 128; ++i)
	//{
	//	unsigned int x = 0;
	//	if (isupper(i))
	//	{
	//		x |= UPPER;
	//	}

	//	if (islower(i))
	//	{
	//		x |= LOWER;
	//	}

	//	if (isdigit(i))
	//	{
	//		x |= DIGIT;
	//	}

	//	if (isxdigit(i))
	//	{
	//		x |= XDIGIT;
	//	}

	//	if (ispunct(i))
	//	{
	//		x |= PUNCT;
	//	}

	//	if (isspace(i))
	//	{
	//		x |= SPACE;
	//	}

	//	if (isprint(i))
	//	{
	//		x |= PRINT;
	//	}

	//	if (isblank(i))
	//	{
	//		x |= BLANK;
	//	}

	//	if (iscntrl(i))
	//	{
	//		x |= CNTRL;
	//	}

	//	if (i && i % 8 == 0)
	//		printf("\n");

	//	printf("%u, ", x);
	//}
#pragma endregion

#pragma region myctype using
	pintf("bir karakter girin: ");
	int ch;

	ch = getchar();

	if (ISUPPER(ch))
		printf("buyuk harf\n");
	else
		printf("buyuk harf degil\n");
#pragma endregion

#pragma region Data struct using
	//Data mydata = { 2, 4, 6};
	//Data* p = &mydata;

	//p->x;

#pragma endregion

#pragma region Datetime1
	//printf("Sizeof(DateTime) = %zu\n", sizeof(DateTime));

	//DateTime dt = {
	//	.mday = 14,
	//	.mon = 3,
	//	.year = 1995 - 1980,
	//	.hour = 21,
	//	.min = 36,
	//	.sec = 45 / 2,
	//};

	//printf("%u\n", dt.uval); // çýkan sayý 3.029.671.534
#pragma endregion

#pragma region Datetime2
	//DateTime dt = {
	//	.uval = 3029671534u, // çýkan sayýyý yazdýk
	//};

	//printf("%02u -%02u-%u  %02u:%02u:%02u\n", dt.mday, dt.mon, dt.year + 1980, dt.hour, dt.min, dt.sec); // 14 03 1995  21 36 45 bilgisi verilecek
	//union olduðu için 3029671534 ' sayýsýndan gün ay yýl saat dakika saniye bilgisine ulaþabildik
#pragma endregion



}