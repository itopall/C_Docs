//32.ders

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

void copy_array(int* pdest, const int* psource, int n)
{
	while (n--)
		*pdest++ = *psource++;
}

void reverse_copy(int* pdest, const int* psource, int n)
{
	psource += n;
	while (n--)
		*pdest++ = *--psource;
}

int main()
{
	//&x++ ve &++x // & operat�r� L value de�il //ge�erli de�il
	//++&x ge�erli de�il 

	int a[5] = { 0,1,2,3,4 };
	int* ptr = a;
	*ptr++ = 99; //dizinin ilk eleman� 99 oldu
	*ptr = 77; // dizinin ikinci eleman� 77 oldu
}