

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
	//fp'nin adresiyle ilk degerini alan fptr de�i�kenini tan�mlay�n

	//pointer to function pointer
	//int (**fptr)(const void*, const void*) = &fp;
	FPTR* fptr = &fp;

	//elemanlar� fp gibi olan 10 elemanl� bir dizi tan�mlay�n fa
	//int(*fa[10])(const void*, const void*);
	FPTR fa[10];
}