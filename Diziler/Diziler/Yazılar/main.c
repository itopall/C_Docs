#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include "nutility.h"

#define		INWORD		1
#define		OUTWORD		0
#define		SIZE		100
#define		URAND_MAX	10

int urand(void)
{
	static int cnt = 0;
	static int flags[URAND_MAX] = { 0 };
	int val;

	if (cnt == URAND_MAX)
		return -1;

	//while (flags[val = rand() % URAND_MAX])
	//	; // altaki ile ayný anlama geliyor
	for (;;)
	{
		val = rand() % URAND_MAX;
		if (flags[val] == 0)
			break;
	}
	++cnt;
	flags[val] = 1;
	return val;
}

int main()
{
#pragma region Dýþarýdan yazi girme

	//char str[SIZE];
	//printf("Bir yazi giriniz: ");
	//scanf("%s", str);

	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	putchar(str[i]);
	//}

#pragma endregion

#pragma region sgets kullanýmý
	//char str[SIZE];

	//printf("Bir yazi girin: ");
	//sgets(str);
	//printf("yazi: [%s]\n", str);

#pragma endregion

#pragma region Yazý uzunluðunu bulma
	//char str[SIZE];
	//printf("bir yazi giriniz: ");
	//sgets(str);

	//int len = 0;

	//for (int i = 0; str[i] != '\0'; ++i)
	//	++len;
	//printf("yazinin uzunlugu: %d", len);

#pragma endregion

#pragma region Yazýnýn sonuna ! iþareti koyma
	//char str[SIZE];
	//printf("bir yazi giriniz: ");
	//scanf("%s", str);
	//
	//printf("[%s]\n", str);
	//int i;

	//for (i = 0; str[i] != '\0'; ++i)
	//	; //null statement
	//str[i] = '!';
	//str[i + 1] = '\0';

	//printf("[%s]", str);
#pragma endregion

#pragma region Ýki yazýyý birleþtirme
	//char s1[SIZE];
	//char s2[SIZE];
	//
	//char s3[SIZE];

	//printf("iki kelime girin: ");
	//scanf("%s%s", s1, s2);

	//int i, k;
	//for (i = 0; s1[i] != '\0'; ++i)
	//	s3[i] = s1[i];

	//for (k = 0; s2[k] != '\0'; ++k)
	//	s3[i++] = s2[k];

	//s3[i] = '\0';

	//printf("[%s] + [%s] = [%s]", s1, s2, s3);

#pragma endregion

#pragma region KArakter sayma ve sayýsýný bulma
	//char s[SIZE];
	//int c;

	//printf("bir yazi giriniz: ");
	//sgets(s);
	//printf("sayilacak karakteri girin: ");
	//c = getchar();

	//int cnt = 0;
	//for (int i = 0; s[i] != '\0'; ++i)
	//	if (s[i] == c)
	//		++cnt;
	//printf("%d tane\n", cnt);
#pragma endregion

#pragma region hangi harften kaçta olduðunu bulma
	//char s[SIZE];
	//int cnt[26] = { 0 };

	//printf("bir yazi girin: ");
	//sgets(s);

	//for (int i = 0;s[i] != '\0'; ++i)
	//	if(isalpha(s[i]))
	//		++cnt[toupper(s[i]) - 'A'];
	//for (int i = 0; i < 26; ++i)
	//	if (cnt[i] != 0)
	//		printf("%c	%d\n", 'A' + i, cnt[i]);
#pragma endregion

#pragma region Reverse Array (baþka dizi kullanmadan)

#pragma endregion


#pragma region Remove Copy
	//char source[SIZE];
	//char dest[SIZE];

	//printf("bir yazi girin: ");
	//sgets(source);
	//int c;

	//printf("Bir karakter girin: ");
	//c = getchar();

	//int write_idx = 0;
	//for (int i = 0; source[i] != '\0'; ++i)
	//{
	//	if (source[i] != c)
	//		dest[write_idx++] = source[i];
	//}
	//dest[write_idx] = '\0';

	//printf("[%s] [%s]\n", source, dest);
#pragma endregion

#pragma region Remove
	//char str[SIZE]; 

	//printf("Bir yazi girin: ");
	//sgets(str);
	//int c;

	//printf("Silinecek karakter girin: ");
	//c = getchar();

	//prinf("[%s]\n", str);

	//int write_idx = 0;
	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	if (str[i] == c)
	//		str[write_idx++] = str[i];
	//}
	//str[write_idx] = '\0';
	//printf("[%s]\n", str);
#pragma endregion

#pragma region Sayýlarý REverse yapma
	//int a[SIZE];

	//randomize();
	//set_array_random(a, SIZE);
	//print_array(a, SIZE);

	//for (int i = 0; i < SIZE / 2; ++i)
	//{
	//	int temp = a[i];
	//	a[i] = a[SIZE - 1 - i];
	//	a[SIZE - 1 - i] = temp;
	//}

	//print_array(a, SIZE);
#pragma endregion

#pragma region Yazý ters çevirme
	//char str[SIZE];

	//printf("bir yazi girin: ");
	//sgets(str);

	//printf("[%s]\n", str);

	//int len;
	//for (len = 0; str[len] != '\0'; ++len)
	//	;
	//for (int i = 0; i < len / 2; ++i)
	//{
	//	char temp = str[i];
	//	str[i] = str[len - 1 - i];
	//	str[len - 1 - i] = temp;
	//}
	//printf("[%s]\n", str);
#pragma endregion

#pragma region Polidrom cümlemi 
	//char str[SIZE];
	//char temp[SIZE];
	//int len = 0;

	//printf("bir yazi girin: ");
	//sgets(str);

	//printf("%s\n", str);

	//for (int i = 0; str[i] != '\0'; ++i)
	//	if (isalpha(str[i]))
	//		temp[len++] = toupper(str[i]);

	//int k;

	//for (k = 0; k < len / 2; ++k)
	//	if (temp[k] != temp[len - 1 - k])
	//		break;

	//if (k == len / 2)
	//	printf("polidrom\n");
	//else
	//	printf("polidrom degil\n");
#pragma endregion

#pragma region tek dizi ile polidrom olup olmadýðýný kont. et ÖDEV

#pragma endregion

#pragma region Kelimenin içinde mi dýþýnda mý(kaç kelime olduðunu sorgulama)
	//char str[SIZE];
	//printf("Bir yazi girin: ");
	//sgets(str);
	//printf("[%s]\n", str);
	//int word_flag = OUTWORD;
	//int word_count = 0;

	//for (int i = 0; str[i] != '\0'; ++i)
	//{
	//	if (isspace(str[i]))
	//		word_flag = OUTWORD;
	//	else if (word_flag == OUTWORD)
	//	{
	//		++word_count;
	//		word_flag = INWORD;
	//	}
	//}

	//printf("toplama kelime; %d", word_count);
#pragma endregion

#pragma region Ýki kelimenin eþitliðini sýnamak
	//char s1[SIZE];
	//char s2[SIZE];

	//printf("iki kelime girin: ");
	//scanf("%s%s", &s1, &s2);

	//int i = 0;
	//int flag = 0;
	//while (s1[i] == s2[i])
	//{
	//	if (s1[i] == '\0')
	//	{
	//		flag = 1;
	//		break;
	//	}
	//	++i;
	//}
	//if (flag)
	//	printf("yazilar esit\n");
	//else
	//	printf("yazilar esit degil\n");
#pragma endregion

#pragma region Urand Fonksiyonu
	//randomize();
	//
	//for(int i = 0; i < URAND_MAX; ++i)
	//{
	//	printf("%d ", urand());
	//}
	//printf("\n");
	//printf("hata degeri = %d\n", urand());
#pragma endregion

#pragma region reverse copy algorithm
	//char source[SIZE] = "bugun c dersinde pointerlar konusu baslayacak";
	//char dest[SIZE];
	//int i;
	//int k = 0;
	//
	//for (int i = 0; source[i] != '\0'; ++i)
	//	;

	//while (i != 0)
	//	dest[k] = source[--i];
	//dest[k] = '\0';

	//printf("[%s]\n", dest);
	//printf("[%s]\n", source);
#pragma endregion

#pragma region Yazýnýn sonuna baþka yazý ekleme
	char s1[SIZE];
	char s2[SIZE];

	printf("iki kelime girin: ");
	scanf("%s%s", s1, s2);
	
	printf("[%s]\n", s1);
	int i;
	for (i = 0; s1[i] != '\0'; ++i)
		;

	for (int k = 0; s2[k] != '\0'; ++k)
	{
		s1[i++] = s2[k];
	}
	s1[i] = '\0';
	printf("[%s]", s1);
#pragma endregion



















}