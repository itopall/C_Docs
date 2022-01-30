
#define			SIZE		100

#include <stdio.h>


void myputs(const char* p)
{
	for (int i = 0; p[i] != '\0'; ++i)
	{
		putchar(p[i]);
	}
	putchar('\n');
}

void myputs2(const char* p)
{
	while (*p != '\0')
	{
		putchar(*p);
		++p;
	}
	putchar('\n');
}

void sgets(char* p)
{
	int ch;
	while ((ch = getchar()) != '\n')
		*p++ = ch;
	*p = '\0';
}

int main()
{
	char str[SIZE] = "ilker topal";

	puts(str);
	myputs(str);
	myputs2(str);
}