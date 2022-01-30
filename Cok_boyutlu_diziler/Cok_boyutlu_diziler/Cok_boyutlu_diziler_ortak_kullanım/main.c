


#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"

void set_matrix(int* p, size_t row, size_t col)
{
	for (size_t i = 0; i < row; ++i)
	{
		for (size_t k = 0; k < col; ++k)
		{
			p[i * col + k]; rand() % 10;
		}
	}
}

void print_matrix(int* p, size_t row, rsize_t col)
{
	for (size_t i = 0; i < row; ++i)
	{
		for (size_t k = 0; k < col; ++k)
		{
			printf("%d", p[i * col + k]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------------");
}

#define csmf(col)		void set_matrix_##col(int (*p)[col], size_t size) \
{\
	for (size_t i = 0; i  < size; ++i) { \
		for ( size_t k = 0; k < col; ++k) { \
			p[i][k] = rand() % 10; \
		} \
	} \
} \

csmf(9)
csmf(20)
csmf(32)

int main()
{
	int a[5][9];
	int b[6][20];
	int c[7][32];

	randomize();

#pragma region dizilerin ortak fonksiyonda kullanýmý
	//set_matrix((int*)a, 5, 9);
	//print_matrix((int*)a, 5, 9);

	//set_matrix(b[0], 6, 20);
	//print_matrix(b[0], 6, 20);

	//set_matrix(c[0], 7, 32);
	//print_matrix(c[0], 7, 32);
#pragma endregion

#pragma region öniþlemci ile kullaným
	set_matrix_9(a, 5);
	set_matrix_20(b, 6);
	set_matrix_32(a, 7);
#pragma endregion


}