#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <stddef.h>

#define moffsetof(s,m)		((size_t)&(((s*)0)->m))

//struct Data {
//	char c;
//	int i;
//	short s;
//	double d;
//};


typedef struct {
	char c1;
	int i;
	char c2;
}Data;

int main()
{
#pragma region alignof
	//for (int i = 0; i < 100; i += 4)
	//{
	//	printf("%x\n", i); 
	//}


	//printf("alignof(char) %zu\n", _Alignof(char));
	//printf("alignof(short) %zu\n", _Alignof(short));
	//printf("alignof(int) %zu\n", _Alignof(int));
	//printf("alignof(long) %zu\n", _Alignof(long));
	//printf("alignof(long long) %zu\n", _Alignof(long long));
	//printf("alignof(float) %zu\n", _Alignof(float));
	//printf("alignof(double) %zu\n", _Alignof(double));
#pragma endregion

	//int x, y, z;
	//double dval;
	//float f;

	//printf("%p %p %p\n", &x, &y, &z);
	//printf("%p\n", &dval);
	//printf("%p\n", &f);

#pragma region Alignof using
	//printf("alignof() %zu\n", _Alignof(struct Data));
	//printf("sizeof(struct Data) = %zu\n", sizeof(struct Data)); 
#pragma endregion

#pragma region 6 deðil 12
	//printf("sizeof(Data) = %zu\n", sizeof(Data));

#pragma endregion

#pragma region moffsetof using
	printf("%zu\n", moffsetof(Data, c1));
	printf("%zu\n", moffsetof(Data, i));
	printf("%zu\n", moffsetof(Data, c2));
#pragma endregion




}