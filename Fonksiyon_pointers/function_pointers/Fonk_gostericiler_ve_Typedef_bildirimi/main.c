

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
	//fp'nin adresiyle ilk degerini alan fptr deðiþkenini tanýmlayýn

	//pointer to function pointer
	//int (**fptr)(const void*, const void*) = &fp;
	FPTR* fptr = &fp;

	//elemanlarý fp gibi olan 10 elemanlý bir dizi tanýmlayýn fa
	//int(*fa[10])(const void*, const void*);
	FPTR fa[10];
}