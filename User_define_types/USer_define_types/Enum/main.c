

#include <stdio.h>
//#define		POKER Bu tanýmlýysa ilki kullanýlacak

//enumaration constant
//enumarator

typedef enum {
	White = 45, Yellow = 21 , Red = 30, Blue = 98, Green = 12, Black = 34
}Color;

#ifdef POKER
	typedef enum {Club, Diamond, Spade, Heart } Suit;
#else
	typedef enum {Club, Diamond, Heart, Spade} Suit;
#endif // !POKER



typedef enum { Ace = 11, Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Jack = 10, Queen = 10, King = 10 } Face;

typedef struct {
	Suit s;
	Face f;
}Card;

//underlying type
int main()
{
	Card c = { .s = Spade, .f = Ace };

}