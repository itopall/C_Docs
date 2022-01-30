#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include "nutility.h" 


#define		SIZE			10

int main()
{
#pragma region onluk sayý sistemi için
	//char str[SIZE];
	//printf("bir yazi girin: ");
	//sgets(str);

	//int ival = 0;
	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	ival = ival * 10 + str[i] - '0';
	//}
	//printf("ival = %d\n", ival);
#pragma endregion

#pragma region Sekizlik sayi sistemi
	//char str[SIZE];
	//printf("bir yazi girin: ");
	//sgets(str);

	//int ival = 0;
	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	ival = ival * 8 + str[i] - '0';
	//}
	//printf("ival = %d\n", ival);
#pragma endregion

#pragma region onaltýlýk sayi sistemi
	//char str[SIZE];
	//printf("bir yazi girin: ");
	//sgets(str);

	//int ival = 0;
	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	if (isdigit(str[i]))
	//		ival = ival * 10 + str[i] - '0';
	//	else if (isxdigit(str[i]))
	//		ival = ival * 16 + toupper(str[i]) - 'A' + 10;
	//}
	//printf("ival = %d\n", ival);
#pragma endregion

#pragma region Sayýyý yaziya donusturmek
	int x;
	char str[SIZE];

	printf("bir tamsayi giriniz: ");
	scanf("%d", &x);

	int i = 0;
	int temp = x;

	while (temp != 0)
	{
		str[i++] = temp % 10 + '0';
		temp /= 10;
	}
	str[i] = '\0';

	for (int k = 0; k < i / 2; ++k)
	{
		char temp = str[k];
		str[k] = str[i - 1 - k];
		str[i - 1 - k] = temp;
	}

	printf("[%s]\n", str);
#pragma endregion




}