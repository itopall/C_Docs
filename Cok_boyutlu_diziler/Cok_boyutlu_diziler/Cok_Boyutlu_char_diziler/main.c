

#include <stdio.h>
#include <string.h>

void swap_str(char* px, char* py)
{
	char temp[20];
	strcpy(temp, px);
	strcpy(px, py);
	strcpy(py,temp);
}

void sort_name(char(*p)[20], size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t k = 0; k < size - 1 - i; ++k)
		{
			if (strcmp(p[k], p[k + 1]) > 0)
				swap_str(p[k], p[k + 1]);
		}
	}
}


//void print_names(char(*p)[20], size_t size)
//{
//	for (size_t i = 0; i < size; ++i)
//		printf("%s ", p[i]);
//
//	printf("\n\n");
//}

void print_names(char(*p)[20], size_t size)
{
	while (size--)
		printf("%s ", *p++); 

	printf("\n\n");
}

int main()
{

}