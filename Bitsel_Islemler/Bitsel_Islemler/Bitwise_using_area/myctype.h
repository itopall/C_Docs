
#define		UPPER		1
#define		LOWER		2
#define		DIGIT		4
#define		XDIGIT		8
#define		PUNCT		16
#define		SPACE		32
#define		PRINT		64
#define		GRAPH		128
#define		BLANK		256
#define		CNTRL		512


extern const int ctype_[];

#define ISUPPER(c)			(ctype_[(c)] & UPPER)
#define ISLOWER(c)			(ctype_[(c)] & LOWER)
#define ISALPHA(c)			(ctype_[(c)] & UPPER | LOWER)
#define ISDIGIT(c)			(ctype_[(c)] & DIGIT)
#define ISALNUM(c)			(ctype_[(c)] & DIGIT | UPPER | LOWER)
#define ISXDIGIT(c)			(ctype_[(c)] & XDIGIT)