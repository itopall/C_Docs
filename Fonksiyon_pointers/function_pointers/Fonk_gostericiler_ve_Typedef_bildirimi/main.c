

#include <stdio.h>
#include <string.h>
//#include "nutility.h"
#include <ctype.h>
#include <stdlib.h>

#define			SIZE		100

typedef int (*FPTR)(const void*, const void*);

int main()
{
	//int (*fp)(const void*, const void*) = strcmp;
	FPTR fp;
	//fp'nin adresiyle ilk degerini alan fptr değişkenini tanımlayın

	//pointer to function pointer
	//int (**fptr)(const void*, const void*) = &fp;
	FPTR* fptr = &fp;

	//elemanları fp gibi olan 10 elemanlı bir dizi tanımlayın fa
	//int(*fa[10])(const void*, const void*);
	FPTR fa[10];
}