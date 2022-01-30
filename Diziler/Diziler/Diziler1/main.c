#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


void func()
{
	static int a[5] = { 0, 1, 2, 3, 4 };

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		++a[i];
	}
}

int random_char(void)
{
	int c;
	while (!isalnum(c = rand() % 128))
		;

	return c;
}

void print_random_password()
{
	
	int len = rand() % 5 + 6;
	for (int i = 0; i < len; ++i)
	{
		putchar(random_char());
	}
	putchar('\n');
}

int main()
{
	/*func();
	func();
	func();
	func();
	func();*/
	//srand(time(NULL));
	//print_random_password();

}