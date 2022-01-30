
#include <stdio.h>

int f1(int a, int b)
{
	if (a > b)
		printf("a grater than b\n");
	else if (b > a)
		printf("b grater than a\n");
	else
		printf("a grater than b\n");

	return 1;
}


int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int x = a;
	if (a > b)
	if (b > a) x = b;
	else x = c;
	printf("%d\n", x);
	
}