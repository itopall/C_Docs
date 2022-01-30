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