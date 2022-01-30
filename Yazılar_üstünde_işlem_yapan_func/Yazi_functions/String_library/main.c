
#define			SIZE		100

#include <stdio.h>
#include <string.h>



void sgets(char* p)
{
	int ch;
	while ((ch = getchar()) != '\n')
		*p++ = ch;
	*p = '\0';
}

void rputs(const char* p)
{
	for (int i = (int)strlen(p) - 1; i >= 0; --i)
		putchar(p[i]);

	putchar('\n');
}

size_t mystrlen(const char* p)
{
	size_t len = 0;

	while (*p != '\n')//*p++
	{
		++len;
		++p;
	}
	return len;
}

size_t count(const char* p, int c)
{
	size_t cnt = 0;

	while (*p)
	{
		if (*p == c)
			++cnt;
		++p;
	}
	return cnt;
}

char* Strchr(const char* p, int c)
{
	while (*p != '\0')
	{
		if (*p == c)
		{
			return (char*)p;
		}
		++p;
	}
	if (c == '\0')
		return (char*)p;

	return NULL;
}

char* Strrchr(const char* p, int c)
{
	const char* pfound = NULL;
	while (*p)
	{
		if (*p == c)
			pfound = p;
		++p;
	}
	if (c == '\0')
		return (char*)p;

	return pfound;
}

char* strstr(const char* psource, const char* psearched);//ödev kendin yap

char* Strpbrk(const char* p, const char* pchars)
{
	while (*p != '\0')
	{
		if (strchr(pchars, *p) != NULL)
			return (char*)p;
		++p;
	}
	return NULL;
}

char *Strcpy(char *pdest,const char* psource)
{
	char* ptemp = pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}

char* Strcat(char* pdest, const char* psource)
{
	char* ptemp = pdest;
	while (*pdest)
		++pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}

char* Strcat2(char* pdest, const char* psource)
{
	strcpy(pdest + strlen(pdest), psource);

	return pdest;
}

char Strcat3(char* pdest, const char* psource)
{
	strcpy(strchr(pdest, '\0'), psource);

	return pdest;
}

int Strcmp(const char* p1, const char* p2)
{
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
			return 0;
		++p1;
		++p2;
	}

	return *p1 - *p2;
}

int is_at_end(const char* p1, const char* p2) //sonunda var mý
{
	size_t len_p1 = strlen(p1);
	size_t len_p2 = strlen(p2);

	if (len_p2 > len_p1)
		return 0;

	return !strcmp(p1 + len_p1 - len_p2, p2);
}

char* str_prepend(char* pdest, const char* psource)
{

}

char* Strrev(char* p)
{
	size_t len = strlen(p);
	for (size_t i = 0; i < len / 2; ++i)
	{
		char temp = p[i];
		p[i] = p[len - 1 - i];
		p[len - 1 - i] = temp;
	}

	return p;
}

int main()
{
	char str[SIZE];
	printf("Bir yazi girin: ");
	sgets(str);
#pragma region strlen()
	//size_t len = strlen(str);
#pragma endregion

#pragma region Mystrlen()
	size_t len = mystrlen(str);
	printf("uzunluk = %zu\n", len);
#pragma endregion

#pragma region strchr()
	char* p;
	p = strchr(str, 'a');
	if (p)
	{
		printf("bulundu... yazinin %d indisli karakteri\n", p - str);
		*p = '*';
		puts(str);
	}
	else
		printf("bulunamadi...\n");
#pragma endregion

#pragma region strstr() func
	//char str[SIZE];
	//char searched[SIZE];

	//printf("icinde arama yapilacak yaziyi girizniz: ");
	//sgets(str);
	//printf("aranacak yaziyi giriniz: ");
	//sgets(searched);

	//char* p = strstr(str, searched);
	//if (p != NULL)
	//{
	//	printf("bulundu .. dizinin %d indisli elemani\n", p - str);
	//	puts(p);
	//}
	//else
	//	printf("bulunamadi\n");
#pragma endregion

#pragma region Karakter deðiþtirme
	char str[SIZE];
	char searched[SIZE];

	printf("icinde arama yapilacak yaziyi girizniz: ");
	sgets(str);
	printf("aranacak yaziyi giriniz: ");
	sgets(searched);

	char* p = strstr(str, searched);
	if (p)
	{
		size_t len = strlen(searched);
		while (len--)
			*p++ = '*';
		printf("(%s)\n", str);
	}
	else
		printf("bulunamadi\n");
#pragma endregion

#pragma region strpbrk()
	//char str[SIZE];
	//char s[] = "aeou";

	//printf("icinde arama yapilacak yaziyi giriniz: ");
	//sgets(str);

	//char* p = strpbrk(str, s);

	//if (p)
	//{
	//	printf("bulundu.. yazinin %d indisli karakteri\n", p - str);
	//	*p = '!';
	//	puts(str);
	//}
	//else
	//	printf("bulunamadi\n");
#pragma endregion

#pragma region Strpbrk()
	char str[SIZE];
	char s[] = "012345";

	printf("icinde arama yapilacak yaziyi giriniz: ");
	sgets(str);

	char* p = strpbrk(str, s);

	if (p)
	{
		printf("bulundu.. yazinin %d indisli karakteri\n", p - str);
		*p = '!';
		puts(str);
	}
	else
		printf("bulunamadi\n");
#pragma endregion

#pragma region strcpy
	char source[SIZE];
	char dest[SIZE];

	printf("bir yazi girin: ");
	sgets(source);

	strcpy(dest, source);

	printf("(%s) (%s)\n", source, dest);
#pragma endregion

#pragma region strcat()
	//char s1[SIZE], s2[SIZE];
	//printf("iki isim giriniz: ");
	//scanf("%s%s", s1, s2);

	//strcat(s1, s2);
	//printf("(%s)\n", s1);
#pragma endregion

#pragma region strcmp()
	//char s1[SIZE];
	//char s2[SIZE];
	//int result;

	//printf("iki kelime girin: ");
	//scanf("%s%s", s1, s2);

	//result = strcmp(s1, s2);

	//if (result > 0)
	//	printf("%s > %s\n", s1, s2);
	//else if (result < 0)
	//	printf("%s > %s\n", s2, s1);
	//else
	//	printf("%s = %s\n", s1, s2);

#pragma endregion

#pragma region is_at_end()
	char s1[SIZE];
	char s2[SIZE];

	printf("birinci yaziyi girin: ");
	sgets(s1);
	printf("ikinci yaziyi giriniz: ");
	sgets(s2);

	if (is_at_end(s1, s2))
	{
		printf("(%s) yazinin sonunda (%s) yazisi var\n", s1, s2);
	}
	else
		printf("hayir yok...\n");
#pragma endregion

#pragma region str_prepend()
	char source[SIZE];
	char dest[SIZE];

	printf("iki kelie giriniz: ");
	scanf("%s%s", source, dest);
	str_prepend(dest, source);

	printf("(%s)\n", dest);
#pragma endregion








	


	
}