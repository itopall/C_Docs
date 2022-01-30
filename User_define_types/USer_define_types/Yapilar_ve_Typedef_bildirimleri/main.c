

#include <stdio.h>
#include <stdlib.h>


//typedef struct Data {
//	int a, b, c;
//	double dval;
//}Data;


//typedef struct {
//	int a, b;
//}Data;
//
//typedef struct Data
//{
//	int a, b;
//}Data,*DataPtr;

typedef struct {
	int x, y;
	double dval;
}*DataPtr;

int  main()
{
	DataPtr pd = (DataPtr)malloc(sizeof(*pd));
}