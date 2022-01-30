

#include <stdio.h>
#include <string.h>
#include "nutility.h"

#define			SIZE		100

void pcswap(char** p1, char** p2)
{
	char* ptemp = *p1;
	*p1 = *p2;
	*p2 = ptemp;
}

void get_min_max(const int* pa, size_t size ,int** pmin, int** pmax)
{
	*pmin = *pmax = (int*)pa;

	for (size_t i = 1; i < size; ++i)
	{
		if (pa[i] < **pmin)
			pmin = (int*)(pa + i);
		else if (pa[i] > **pmax)
			*pmax = (int*)(pa + i);
	}
}

void print_names(char** pa, size_t size)
{
	while (size--)
		printf("%s ", *pa++);

	printf("\n");
}

void sort_names(char** pa, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t k = 0; k < size - 1 - i; ++k)
		{
			if (strcmp(pa[k], pa[k + 1]) > 0)
			{
				char* temp = pa[k];
				pa[k] = pa[k + 1];
				pa[k + 1] = temp;
			}
		}
	}
}
int  main()
{
#pragma region get_min_max
	/*int a[SIZE];
	int* ptr_min;
	int* ptr_max;

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	get_min_max(a, SIZE, &ptr_min, &ptr_max);*/
#pragma endregion



}