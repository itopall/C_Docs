
#include <stdio.h>

int main(int argc, char **argv) 
{
#pragma region fcloseall using
//	FILE* f1 = fopen("ilker.txt", "w");
//	FILE* f2 = fopen("topal.txt", "w");
//	FILE* f3 = fopen("hasan.txt", "w");
//	FILE* f4 = fopen("sam.txt", "w");
//
//	if (!f1 || !f2 || !f3 || !f4)
//	{
//		fprintf(stderr, "dosya olusturulamadi\n");
//		return 1;
//	}
//
//	int retval = _fcloseall();
//
//	printf("retval = %d\n", retval);
#pragma endregion

#pragma region fgetc using
	//FILE* f = fopen("date.h", "r");
	//if (!f)
	//{
	//	fprintf(stderr, "dosya acilmadi\n");
	//	return 1;
	//}

	//int c;

	//while ((c = fgetc(f)) != EOF) {
	//	putchar(c);
	//}

	//fclose(f);
#pragma endregion

#pragma region arg and file

	if (argc != 2)
	{
		fprintf(stderr, "kullanim : <yaz> <dosya ismi>\n");
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (f == NULL)
	{
		fprintf(stderr, "%s dasyasi acilamadi\n",argv[1]);
		return 2;
	}

	int ch;

	while ((ch = fgetc(f)) != EOF)
		putchar(ch);

	fclose(f);

#pragma endregion


}