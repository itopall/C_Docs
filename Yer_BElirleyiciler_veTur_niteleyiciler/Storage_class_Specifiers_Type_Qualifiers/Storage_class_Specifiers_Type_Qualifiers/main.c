

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"
//static kullanýmý
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


//rastgele bir password (parola) oluþturan fonksiyon

//1) bana bir adres gönder parolayý o adresteki diziye yazalým
//2) ben statik yerel bir dizide parolayý oluþturacaðým ve onun adresini döndüreceðim
//3) ben her parola talebi için dinamik bir dizi oluþturup o dinamik dizinin adresini döndüreceðim

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
//bunu çaðýran kod bunu bir yere kopyalayýp öyle baþka deðerleri elde edebiliriz.
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

#pragma region 2. create_pass için kullaným
	//char* p = create_password();

	//for (int i = 0; i < 10; ++i)
	//	puts(create_password());

	//printf("parola: %s\n", p);
#pragma endregion

#pragma region 3. create_pass için kullaným
	char* pa[10];

	for (int i = 0; i < 10; ++i)
		pa[i] = create_password;

	for (int i = 0; i < 10; ++i)
		puts(pa[i]);

	for (int i = 0; i < 10; ++i)
		free(pa[i]);

#pragma endregion




}