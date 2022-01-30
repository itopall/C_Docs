#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define		NPOINTS		10000000

int main()
{
	int inside_count = 0;
	for (int i = 0; i < NPOINTS; ++i)
	{
		double dx = (double)rand() / RAND_MAX;
		double dy = (double)rand() / RAND_MAX;
		if (dx * dx + dy * dy <= 1.)
			++inside_count;
	}
	printf("pi = %.12f\n", 4. * inside_count / NPOINTS);
}