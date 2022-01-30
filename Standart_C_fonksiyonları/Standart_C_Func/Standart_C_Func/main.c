
#define	_CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#define		SIZE		100

int main()
{

#pragma region Yazýdan sayýya atoi

	char str[SIZE];

	printf("bir tam sayi girin: ");
	scanf("%s", str);

	int ival = atoi(str);
	printf("%d", ival);
#pragma endregion


#pragma region atof()
	char str[SIZE];

	printf("bir yazi girin: ");
	scanf("%s", str);

	int ival = atoi(str);
	double dval = atof(str);

#pragma endregion

#pragma region strtod()
	char str[SIZE];

	printf("bir yazi girin: ");
	scanf("%s", str);
	double dval;

	dval = strtod(str, NULL);
	printf("dval = %f\n", dval);
#pragma endregion



}


