#define	_CRT_SECURE_NO_WARNINGS 


#define		XORSWAP(x,y)		((x) ^= (y) , (y) ^= (x) , (x) ^= (y))
#define		powerof2(x)			((x) && !((x) & ((x) - 1)))


#include <stdio.h>
#include <Windows.h>
#include "nutility.h"

void bitprint2(int x)
{
	for (int i = sizeof(int) * 8 - 1; i >= 0; --i)
	{
		putchar((x >> i) & 1 ? '1' : '0');
	}
	putchar('\n');
}

void bitprint(int x)
{
	unsigned int mask = ~(~0u >> 1);

	while (mask) {
		putchar(x & mask ? '1' : '0');
		mask >>= 1;
	}
	putchar('\n');
}

//int set_bit_count(int x)
//{
//	int cnt = 0; 
//	unsigned int mask = ~(~0u >> 1);
//
//	while (mask) {
//		if (x & mask)
//			++cnt;
//		mask >>= 1;
//	}
//
//	return cnt;
//}



int main()
{
#pragma region bprint
	//bprint(32);
#pragma endregion

#pragma region bitwise not
	//int x;
	//printf("bir tam sayi girin: ");
	//scanf("%d", &x);
	//printf("x = %d\n", x);

	//bprint(x);
	//bprint(~x);

	//printf("x = %d\n", x);
#pragma endregion

#pragma region bitwise left shift
	//int x;
	//printf("bir tam sayi girin: ");
	//scanf("%d", &x);
	//
	//printf("x = %d\n", x);

	//bprint(x);
	//bprint(x << 1);

	//printf("x = %d\n", x);
#pragma endregion

#pragma region soru
	//int x = 1;

	//while (x) {
	//	bprint(x);
	//	x <<= 1;
	//}
#pragma endregion

#pragma region bitwise right shift
	//int x;
	//printf("bir tam sayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//bprint(x >> 1);
#pragma endregion

#pragma region soru
	//printf("%d\n", ~(~0u >> 1));
#pragma endregion

#pragma region bitwise and
	//int x,y;
	//printf("iki tam sayi girin: ");
	//scanf("%d%d", &x,&y);

	//bprint(x);
	//bprint(y);
	//bprint(x & y);
#pragma endregion

#pragma region bitwise or
	//int x, y;
	//printf("iki tam sayi girin: ");
	//scanf("%d%d", &x, &y);

	//bprint(x);
	//bprint(y);
	//bprint(x | y);
#pragma endregion

#pragma region Exor op.
	//int x, y;
	//printf("iki tam sayi girin: ");
	//scanf("%d%d", &x, &y);

	//bprint(x);
	//bprint(y);
	//bprint(x ^ y);
#pragma endregion

#pragma region exor swap
	//int x, y;
	//printf("iki tam sayi girini: ");
	//scanf("%d%d", &x, &y);

	//printf("x = %d	y = %d", x, y);
	//x ^= y;
	//y ^= x;
	//x ^= y;
	//printf("x = %d	y = %d", x, y);
#pragma endregion

#pragma region örnek
	//int x = 0;
	//randomize();

	//while (x != -1)
	//{
	//	x |= (1 << (rand() % 32));
	//	bprint(x);
	//	Sleep(50);
	//}
	//bprint(x);
#pragma endregion

#pragma region bit 1 leme

	//int x = 0;

	//int n;

	//printf("bir tamsayi girin: ");
	//scanf("%d", &n);

	//bprint(x);

	//x |= (1 << n);
	//bprint(x);
#pragma endregion

#pragma region bit 0 lama

	//int x = -1;

	//int n;

	//printf("bir tamsayi girin: ");
	//scanf("%d", &n);

	//bprint(x);

	//x &= ~(1 << n);
	//bprint(x);
#pragma endregion

#pragma region örnek 2
	//int x = 0;
	//randomize();

	//while (x != -1)
	//{
	//	x |= (1 << (rand() % 32));
	//	bprint(x);
	//	Sleep(50);
	//}
	//bprint(x);

	//while (x)
	//{
	//	x &= ~(1 << (rand() % 32));
	//	bprint(x);
	//	Sleep(50);
	//}
#pragma endregion

#pragma region Flip-toggle
	//int x = 124214;

	//bprint(x);

	//int n;
	//printf("kacinci bit: ");
	//scanf("%d", &n);
	//x ^= (1 << n);
	//bprint(x);
#pragma endregion

#pragma region örnek 3
	//int x = 0;

	//randomize();

	//while (1)
	//{
	//	bprint(x);
	//	x ^= 1 << (rand() % 32);
	//	Sleep(15);
	//}
#pragma endregion

#pragma region bit get'leme'
	//int x;
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//for (int i = 0; i < 32; ++i)
	//{
	//	printf("sayinin %d. biti %c\n", i, (x & (1 << i)) ? '1' : '0');
	//}
#pragma endregion

#pragma region bitprint using
	//int x;
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//bitprint(x);
	//bitprint2(x);
#pragma endregion

#pragma region endüþük anlamlý biti bulma
	//int x;
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//printf("%d\n", x & 15);
#pragma endregion

#pragma region Set_bit count using

	//int x;
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//printf("%d sayisinin %d biti 1\n", x, set_bit_count(x));
#pragma endregion

#pragma region look up table oluþturma
	//for (int i = 0; i < 256; ++i)
	//{
	//	if (i && i % 16 == 0)
	//		printf("\n");
	//	printf("%d, ", set_bit_count(i));
	//}
#pragma endregion

#pragma region look up table using
	//int x; 
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//bprint(x);
	//printf("%d\n", set_bit_count(x));
#pragma endregion

#pragma region mülakat sorusu
	
	//öyle bir ifade yazýnýz ki
	//x bir tam sayý deðiþken
	//x 2^nin kuvveti mi
	//x && !(x & (x - 1)) 

	//int x;
	//printf("bir tamsayi girin: ");
	//scanf("%d", &x);

	//printf("%d\n", powerof2(x));
#pragma endregion












}