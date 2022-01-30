

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define			SIZE		100
int main()
{
#pragma region sprintf() using
	int x = 20;
	double dval = 3.4;
	char str[] = "muratcan";

	char buffer[SIZE];

	sprintf(buffer, "%d %f %s", x, dval, str);
	puts(buffer);
	_strrev(buffer);
#pragma endregion

#pragma region sprintf() using
	char name[SIZE] = "ilker";
	char surname[SIZE] = "topal";
	int birth_year = 1998;
	char file_name[SIZE];

	for (int i = 0; i < 100; ++i)
	{
		spirntf(file_name, "%s_%s_%02d_%03d.jpeg", surname, name, birth_year % 100, i + 1);
		printf("(%s)", file_name);
		getchar();
	}


#pragma endregion


}