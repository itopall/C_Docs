
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nutility.h"

#define		SIZE		100

char* mystrdup(const char* p)
{
	char * pd = (char *)malloc(strlen(p) + 1);
	if (!pd) {
		fprintf(stderr, "bellek yetersiz\n");
	}
	

	return strcpy(pd, p);
}

char* strconcat(const char* p1, const char* p2)
{
	char* pd = (char*)malloc(strlen(p1) + strlen(p2) + 1);
	if (pd == NULL)
	{
		fprintf(stderr, "bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}
	

	return strcat(strcpy(pd, p1), p2);

}

char* get_name(void)
{
	static char buffer[SIZE];

	printf("bir isim girin: ");
	sgets(buffer);

	char* pd = malloc(strlen(buffer) + 1);
	if (!pd) {
		return NULL;
	}

	return strcpy(pd, buffer);
}

int main()
{

#pragma region Malloc-free
	//size_t n;

	//printf("kac leemenalý bir dizi: ");
	//scanf("%zu", &n);
	//int* pd = (int*)malloc(n * sizeof(int));

	//if (pd = NULL)
	//{
	//	printf("bellek yetersiz\n");
	//	exit(EXIT_FAILURE);
	//}
	//set_array_random(pd, n);
	//print_array(pd, n);

	//free(pd);
#pragma endregion

#pragma region strdup using
	//char str[SIZE];

	//printf("bri yazi girin: ");
	//sgets(str);

	////bir yazinin tersine ihitiyacýmýz var
	////ama yazýnýn arjinalini korumamýz gerekiyor.

	//char* pd = _strdup(str);
	//_strrev(pd);
	//printf("%s %s\n", str, pd);
	//free(pd);
#pragma endregion


#pragma region Dinamik bir matris oluþturmak1
	//size_t row, col;

	//printf("matrisin satir ve sutun sayisini giriniz: ");
	//sacnf("%zu%zu", &row, &col);

	//int** pd = (int**)malloc(row * sizeof(int*));
	//if (!pd) {
	//	printf("bellek yetersiz\n");
	//	return 1;
	//}
	//for (size_t i = 0; i < row; ++i)
	//{
	//	pd[i] = (int*)malloc(col * sizeof(int));
	//	if (!pd[i])
	//	{
	//		printf("bellek yetersi\n");
	//		return 1;
	//	}
	//}

	//randomize();

	//for (size_t i = 0; i < row; ++i)
	//{
	//	for (size_t k = 0; k < col; ++k)
	//	{
	//		pd[i][k] = rand() % 10;
	//	}
	//}
	//for (size_t i = 0; i < row; ++i)
	//{
	//	for (size_t k = 0; k < col; ++k)
	//	{
	//		printf("%d", pd[i][k]);
	//	}
	//	printf("\n");
	//}
	//printf("-----------------------------------\n");

	//for (size_t i = 0; i < row; ++i)
	//{
	//	free(pd[i]);
	//}

	//free(pd);

#pragma endregion

#pragma region Dinamik bir matris oluþturmak2
	size_t row, col;

	printf("matriisn satir ve sutun sayiisni girin: ");
	scanf("%zu%zu", &row, &col);

	randomize();

	int* pd = (int*)malloc(row * col * sizeof(int));
	if (!pd)
	{
		printf("nellek yetersiz\n");
		return 1;
	}
	for (size_t i = 0; i < row; ++i)
	{
		for (size_t k = 0; k < col; ++k)
		{
			printf("%d", pd[i * col + k]);
		}
		printf("\n");
	}
#pragma endregion

#pragma region mülakat sorusu
	//size_t n;

	//printf("baç nesne: ");
	//scanf("%zu", &n);

	//int* pd = (int*)malloc(n * sizeof(int));

	//if (pd == NULL)
	//{
	//	printf("malloc null pointer döndürdü\n");
	//}
	//else {
	//	printf("malloc'un dondurdugu adres %p\n", pd);
	//}
	//peki malloca argüman olarak gönderilen deðer 0 ise
	//bu durumda gdd
	//a) NULL pointer 
	//b) NULL pointer olmayan bir adres olabilir
	// a ve b seçeneklerinde dereference edilmesi ub.
	//a ve b seçenekelerinnde adreslerin free iþlevine gönderilmesi tanýmlý daavranýþ

#pragma endregion

#pragma region calloc
	//size_t n;

	//printf("baç nesne: ");
	//scanf("%zu", &n);

	//int* pd = (int*)calloc(n , sizeof(int));

	//if (!pd) {
	//	printf("bellek yetersiz\n");
	//	return 1;
	//}
	//print_array(pd, n); //garbage

	//free(pd);

#pragma endregion

#pragma region realloc
	size_t n, n_add;
	printf("kac tam sayi: ");
	scanf("%zu", &n);

	int* pd = (int*)malloc(n * sizeof(int));
	if (!pd) {
		printf("bellek yetersiz\n");
		return 1;
		
	}
	set_array_random(pd, n);
	print_array(pd, n);
	printf("kac tam sayi daha ilave edilsin: ");
	scanf("%zu", &n_add);
	pd = (int*)realloc(pd, (n + n_add) * sizeof(int));
	if (!pd) {
		printf("bellek yetersiz\n");
		return 1;

	}
	set_array_random(pd + n, n_add);
	print_array(pd, n + n_add);

	free(pd);

#pragma endregion









}