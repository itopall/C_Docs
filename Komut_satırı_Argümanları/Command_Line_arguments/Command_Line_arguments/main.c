#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "date.h"




int main(int argc, char** argv)
{
#pragma region Argv ve argc kullanýmýna ilk adým
	//printf("argc = %d\n", argc);

	//for (int i = 0; i < argc; ++i)
	//{
	//	printf("argv[%d] = %s\n", i, argv[i]);
	//}
#pragma endregion

#pragma region negunu using
	//if (argc != 4) {
	//	printf("kullanim: <negunu> <gg> <aa> <yyyy>\n");
	//	return 1;
	//}

	//int mday = atoi(argv[1]);
	//int mon = atoi(argv[2]);
	//int year = atoi(argv[3]);

	//Date mydate;
	//set_date(&mydate, mday, mon, year);
	//printt(&mydate);

#pragma endregion

#pragma region Hesap makinesi
	//if (argc != 4) {
	//	printf("kullanim: <hes> <sol operand> <islem +-*/> <sag operand>\n");
	//	return 1;
	//}

	//int op_left = atoi(argv[1]);
	//int op_right = atoi(argv[3]);

	//switch (argv[2][0]) {
	//case '+': printf("%d\n", op_left + op_right); break;
	//case '-': printf("%d\n", op_left - op_right); break;
	//case '*': printf("%d\n", op_left * op_right); break;
	//case '/': 
	//	if (op_right == 0)
	//		printf("sifira bolme hatasi\n");
	//	else
	//		printf("%f\n", (double)op_left / op_right); break;
	//default: printf("gecersiz operator");
	//}


#pragma endregion

#pragma region tobin
	//if (argc != 2) {
	//	printf("kullanim: <tobin> <integer> \n");
	//	return 1;
	//}

	//int val = atoi(argv[1]);
	//unsigned mask = ~(~0u >> 1);

	//while (mask)
	//{
	//	putchar(val & mask ? '1' : '0');
	//	mask >>= 1;
	//}

#pragma endregion

#pragma region ortalama
	double sum = 0.;

	for (int i = 1; i < argc; ++i)
	{
		sum += atof(argv[i]);
	}
	printf("%f\n", sum / (argc - 1));
#pragma endregion


}