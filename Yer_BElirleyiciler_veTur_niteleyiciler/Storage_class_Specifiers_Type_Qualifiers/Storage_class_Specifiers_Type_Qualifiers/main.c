

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"
//static kullan�m�
void foo()
{

#pragma region Static with int
	//static int a[5] = { 0 };

	//print_array(a, 5);

	//for (int i = 0; i < 5; ++i)
	//	++a[i];
#pragma endregion

#pragma region static with char
	//static char str[100] = "ilker";
	//puts(str);
	//strcat(str, "topal");
#pragma endregion


}


//rastgele bir password (parola) olu�turan fonksiyon

//1) bana bir adres g�nder parolay� o adresteki diziye yazal�m
//2) ben statik yerel bir dizide parolay� olu�turaca��m ve onun adresini d�nd�rece�im
//3) ben her parola talebi i�in dinamik bir dizi olu�turup o dinamik dizinin adresini d�nd�rece�im

//1.)
//char* create_password(char* p)
//{
//	size_t len = rand() % 8 + 4;
//
//	for (size_t i = 0; i < len; ++i)
//		p[i] = rand() % 26 + 'a';
//
//	p[len] = '\0';
//	return p;
//}

//2.)
//bunu �a��ran kod bunu bir yere kopyalay�p �yle ba�ka de�erleri elde edebiliriz.
//char* create_password(void)
//{
//	static char buffer[100];
//	size_t len = rand() % 8 + 4;
//
//	for (size_t i = 0; i < len; ++i)
//		buffer[i] = rand() % 26 + 'a';
//
//	buffer[len] = '\0';
//
//	return buffer;
//}



char* create_password(void)
{

	size_t len = rand() % 8 + 4;

	char* p = (char*)malloc(len + 1);
	//kontrol

	for (size_t i = 0; i < len; ++i)
		p[i] = rand() % 26 + 'a';

	p[len] = '\0';

	return p;
}



int main()
{
#pragma region foo using
	//for (int i = 0; i < 10; ++i)
	//	foo();
#pragma endregion

	

	randomize();

#pragma region 2. create_pass i�in kullan�m
	//char* p = create_password();

	//for (int i = 0; i < 10; ++i)
	//	puts(create_password());

	//printf("parola: %s\n", p);
#pragma endregion

#pragma region 3. create_pass i�in kullan�m
	char* pa[10];

	for (int i = 0; i < 10; ++i)
		pa[i] = create_password;

	for (int i = 0; i < 10; ++i)
		puts(pa[i]);

	for (int i = 0; i < 10; ++i)
		free(pa[i]);

#pragma endregion




}