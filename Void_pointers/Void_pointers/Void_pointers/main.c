#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "nutility.h"
//generic function

#define		SIZE		100

void* mymemset(void* vptr, int val, size_t size)
{
	char* p = (char*)vptr;

	while (size--)
		*p++ = val;

	return vptr;
}

void* mymemcpy(void* vpdest, const void* vpsource, size_t n)
{
	char* pdest = (char*)vpdest;
	const char* psource = (const char*)vpsource;
	while (n--)
	{
		*pdest++ = *psource++;
	}

	return vpdest;
}

void* mymemmove(void* vpdest, const void* vpsource, size_t n)
{
	char* pdest = (char*)vpdest;
	const char* psource = (const char*)vpsource;

	if (pdest < psource)
	{
		while (n--)
			*pdest++ = *psource++;
	}
	else
	{
		pdest += n;
		psource += n;
		while (n--)
			*--pdest = *--psource;
	}

	return vpdest;
}

void* mymemchr(const void* vp, int val, size_t n)
{
	const char* p = (const char*)vp;
	while (n--)
	{
		if (*p == val)
			return (char*)p;
		++p;
	}
	return NULL;
}

int mymemcmp(const void* vpx, const void* vpy, size_t n)
{
	const unsigned char* px = vpx;
	const unsigned char* py = vpy;

	while (n--)
	{
		if (*px != *py)
			return *px > *py ? 1 : -1;

		++px;
		++py;
	}
	return 0;
}

//vp: reverse edilecek dizinin adresi
//size: reverse edilecek dizinin boyutu
//sz reverse edilecek dizinin elemanlarýnýn size of deðeri
void* greverse(void* vp, size_t size, size_t sz)
{
	char* p = (char*)vp;
	for (size_t i = 0; i < size / 2; ++i)
	{
		gswap(p + i * sz, p + (size - 1 - i) * sz,sz);
	}
}

void* greverse2(void* vp, size_t size, size_t sz)
{
	char* ps = (char*)vp;
	char* pe = ps + (size - 1) * sz;

	while (ps < pe)
	{
		gswap(ps, pe, sz);
		ps += sz; 
		pe -= sz;
	}

}

void* gsearch(const void* vpa, size_t size, size_t sz, const void* vpkey)
{
	const char* p = (const char*)vpa;
	for (size_t i = 0; i < size; ++i)
	{
		if (!memcmp(p + i * sz, vpkey, sz))
			return (char*)(p + i * sz);

	}

	return NULL;
}

void* gsearch2(const void* vpa, size_t size, size_t sz, const void* vpkey)
{
	const char* p = (const char*)vpa;

	while (size--)
	{
		if (!memcmp(p, vpkey, sz))
			return (char*)p;
		p += sz;
	}
	
	return NULL;
}

void* fill_array(void* vp, size_t size, size_t sz, const void* vpval)
{
	char* p = (char*)vp;

	while (size--)
	{
		memcpy(p, vpval, sz);
		p += sz;
	}
	return vp;
}


int x = 10;
double dval = 3.2;
char str[10];

int main()
{
	void* a[] = { &x, &dval, str };
#pragma region void pointer using
	//int x = 10;
	//char str[] = "ilker";
	//double dval = 2.3;

	//void* ptr = &x;
	//int* iptr;

	//iptr = (int*)ptr;
	//ptr = NULL;
#pragma endregion

#pragma region using gswap
	//int x = 29, y = 27;
	//
	//gswap(&x,&y,sizeof(int));
	//printf("%d %d\n", x, y);

	//double dx = 23.45, dy = 64.13;
	//gswap(&dx, &dy, sizeof(double));
	//printf("%f %f\n", dx, dy);

	//int a[5] = { 1,3,5,7,9 };
	//int b[5] = { 2,4,6,8,10 };
	//gswap(a, b, sizeof a);
#pragma endregion

	int a[SIZE];
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

#pragma region Memset() using
	//memset(a, 0, sizeof(a));
	//print_array(a, SIZE);
#pragma endregion

#pragma region Kaç eleman sýfýrlansýn
	//int idx;
	//int n;

	//printf("hangi indexten baslayarak kac tane eleman sifirlanacak\n");
	//scanf("%d %d", &idx, &n);
	//memset(a + idx, 0, n * sizeof(int));

	//print_array(a, SIZE);
#pragma endregion

#pragma region Char array ile kullanýmý memset()
	//char str[SIZE] = "ilker topal";

	//memset(str + 3, '*', 3);
	//puts(str);
#pragma endregion

#pragma region memcpy using
	//int b[SIZE];

	//memcpy(b, a, sizeof a);
	//print_array(b, SIZE);
#pragma endregion

#pragma region Soru memcpy 
	//int b[SIZE] = { 0 };

	//int idx_a, idx_b, n;

	//printf("a'nin hangi indisli elemanindan baslayarak: ");
	//scanf("%d", &idx_a);
	//printf("b'nin hangi indisli elemanindan baslayarak: ");
	//scanf("%d", &idx_b);
	//printf("kac eleman kopyalanacak: ");
	//scanf("%d", &n);
	//memcpy(b + idx_b, a + idx_a, n * sizeof(int));

#pragma endregion

#pragma region memchr using
	char str[100] = { "142891491728749129059328495464589679879812" };
	char* p = (char*)memchr(str + 20, '7', 20);
	if (p != NULL)
		printf("bulundu idx = %d\n", p - str);
	else
		printf("bulunamadi\n");
#pragma endregion

#pragma region memcmp using
	int b[SIZE] = { 1,3,5,7,9 };
	int c[SIZE] = { 1,3,5,7,9 };

	if (!memcmp(b, c, sizeof(b)))
	{
		printf("evet iki dizi ayni\n");
	}
	else
		printf("hayir ayni degil\n");

#pragma endregion

#pragma region greverse
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//double b[] = { 1.1 ,2.2, 3.3, 4.4, 5.5 ,6.6 ,7.7 };
	//
	//greverse(a, 10, sizeof(int));
	//greverse(b, asize(b), sizeof(double));

	//print_array(a, 10);
	//for (size_t i = 0; i < asize(b); ++i)
	//	printf("%f ", b[i]);
#pragma endregion

#pragma region gsearch kullanýmý

	int ival;
	
	printf("aranacak deger giriniz: ");
	scanf("%d", &ival);
	
	int* ptr = (int*)gsearch(a, SIZE, sizeof(int), &ival);
	if (ptr)
		printf("bulundu dizinin %d indisli elemani\n", ptr - a);
	else
		printf("bulunamadi\n");


#pragma endregion




	






}