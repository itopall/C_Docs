



#include <stdio.h>
#include <string.h>
#include "nutility.h"

const char* p[] = { "ilker","furkan","ilkay","tahir","g�lhan","semra","yakup" };
int main()
{
	

	//int c;
	//printf("bir karakter girin: ");
	//c = getchar();
	//for (size_t i = 0; i < asize(p); ++i)
	//{
	//	if (strchr(p[i], c))
	//		printf("%s", p[i]);
	//	//putchar(p[i][strlen(p[i]) - 1]);// dizideki elemanlar�n son karakterlerinin yazar
	//}

#pragma region strpbrk
	char str[20];

	printf("bir karakter girin: ");
	scnaf("%s", str);

	for (size_t i = 0; i < asize(p); ++i)
	{
		if (strpbrk(p[i], str) != NULL)
		{
			printf("%s", p[i]);
		}
	}
#pragma endregion

#pragma region S�ralama yapma k���kten b�y��e
	//for (size_t i = 0; i < asize(p) - 1; ++i)
	//{
	//	for (size_t k = 0; k < asize(p) - 1 - i; ++k)
	//	{
	//		if (strcmp(p[k], p[k + 1]) > 0) // adresleri kar��la�t�r�yoruz
	//		{
	//			const char* ptemp = p[k];
	//			p[k] = p[k + 1];
	//			p[k + 1] = ptemp;
	//		}
	//	}
	//}
#pragma endregion

#pragma region m�lakat sorusu
	for (size_t i = 0; i < asize(p) - 1; ++i)
	{
		for (size_t k = 0; k < asize(p) - 1 - i; ++k)
		{
			size_t len1 = strlen(p[k]);
			size_t len2 = strlen(p[k + 1]);
			if (len1 > len2 || (len1 == len2 && strcmp(p[k], p[k + 1]) > 0)) // adresleri kar��la�t�r�yoruz
			{
				const char* ptemp = p[k];
				p[k] = p[k + 1];
				p[k + 1] = ptemp;
			}
		}
	}
#pragma endregion





}