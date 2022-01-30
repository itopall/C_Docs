

#include <stdio.h>

int main()
{
#pragma region Const ub
	//const int x = 10;

	//int* p = (int *)&x;

	//*p = 40;
#pragma endregion


#pragma region const use with pointer
	
	//---------------------------------------------------------------------//
	//int x = 10;
	//int y = 20;
	//int* const p = &x; //const pointer // adresindeki deðeri deðiþtirmesine izin vermiyoruz

	////p = &y; ub
	//*p = y;
	//printf("%p %p", p, &x);


	//------------------------------------------------------------------//
	//int x = 10;
	//int y = 20;

	//const int* p = &x; // pointer to const int // *p deðerini deðiþtirmeye izin vermiyoruz.
	//p = &y;
	////*p = 23; error
	//int ival = *p;
	//--------------------------------------------------------------------//

	//-------------------------------------------------------------------//
	int x = 23;
	int y = 54;
	const int* const p = &x;
	//p = &y; geçersiz
	//*p = 34; geçersiz
#pragma endregion


}