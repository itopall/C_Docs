#ifndef NUTILITY_H
#define	NUTILITY_H


#define		isleap(y)		((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
#define		randomize()		srand((unsigned)time(NULL))
#define		asize(x)		(sizeof(x) / sizeof(x[0]))


int		isprime(int val);
void	pline(void);
int		ndigit(int);
void	set_array_random(int* p, int size);
void	print_array(const int* p, int size);
void	sort_array(int* p, int size);
void	sgets(char* p);

#endif