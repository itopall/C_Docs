 #include "nutility.h"
#include <stdio.h>
#include <stdlib.h>

static int icmp(const void* vp1, const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}

void set_array_random(int* p, int size)
{
	while (size--)
		*p++ = rand() % 1000;
}

void print_array(const int* p, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i && i % 20 == 0) // i yerine i != 0 yazýlabilir.
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n-------------------------------------------------------------\n");
}

void sort_array(int* p, int size)
{
	qsort(p, size, sizeof(int), &icmp);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void gswap(void* vpx, void* vpy, size_t sz)
{
	char* px = (char*)vpx;
	char* py = (char*)vpy;

	while (sz--) {
		char temp = *px;
		*px++ = *py;
		*py++ = temp;
	}
}

int		day_of_week(int d, int m, int y)
{
	return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}

const char* random_name(void)
{
	//buraya static const char * const pnames[] isimli bir dizi gelecek
	static const char* const pnames[] = { "ilker","semra","gulhan","yakup","ali","merve","sena","beyza" };
	return random_elem(pnames);
}

const char* random_surname(void)
{
	static const char* const psurnames[] = { "topal","demir","cavus","yilmaz","cansiz","ak","bekar","kilimci"};

	return random_elem(psurnames);
}

const char* random_town(void)
{
	static const char* const ptowns[] = { "amasya","mugla","samsun","kocaeli","istanbul","bursa","zonguldak","trabzon" };

	return random_elem(ptowns);

}
