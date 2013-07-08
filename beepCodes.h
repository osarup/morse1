#define DIT Beep(1000, 100);
#define DAH Beep(1000, 300);
#define TG _sleep(100);
#define SG _sleep(300);
#define LG _sleep(400);

#include <Windows.h>
#include <string.h>
#include <ctype.h>

void A()
{
	DIT TG DAH SG
}

void B()
{
	DAH DIT TG DIT TG DIT SG
}

void C()
{
	DAH DIT TG DAH DIT SG
}

void D()
{
	DAH DIT TG DIT SG
}

void E()
{
	DIT SG
}

void F()
{
	DIT TG DIT TG DAH DIT SG
}

void G()
{
	DAH DAH DIT SG
}

void H()
{
	DIT TG DIT TG DIT TG DIT SG
}

void I()
{
	DIT TG DIT SG
}

void J()
{
	DIT TG DAH DAH DAH SG
}

void K()
{
	DAH DIT TG DAH SG
}

void L()
{
	DIT TG DAH DIT TG DIT SG
}

void M()
{
	DAH DAH SG
}

void N()
{
	DAH DIT SG
}

void O()
{
	DAH DAH DAH SG
}

void P()
{
	DIT TG DAH DAH DIT SG
}

void Q()
{
	DAH DAH DIT TG DAH SG
}

void R()
{
	DIT TG DAH DIT SG
}

void S()
{
	DIT TG DIT TG DIT SG
}

void T()
{
	DAH SG
}

void U()
{
	DIT TG DIT TG DAH SG
}

void V()
{
	DIT TG DIT TG DIT TG DAH SG
}

void W()
{
	DIT TG DAH DAH SG
}

void X()
{
	DAH DIT TG DIT TG DAH SG
}

void Y()
{
	DAH DIT TG DAH DAH SG
}

void Z()
{
	DAH DAH DIT TG DIT SG
}

void PERIOD()
{
	DIT TG DAH DIT TG DAH DIT TG DAH SG
}

void COMMA()
{
	DAH DAH DIT TG DIT TG DAH DAH SG
}

void parseWord (char inStr[1024])
{
	unsigned int slen = strlen (inStr);
	//bool flag=0;

	for (int i=0; i < slen; i++)
	{
		switch (tolower(inStr[i]))
		{
		case 'a':	A();
					break;

		case 'b':	B();
					break;

		case 'c':	C();
					break;
		
		case 'd':	D();
					break;

		case 'e':	E();
					break;
		
		case 'f':	F();
					break;

		case 'g':	G();
					break;

		case 'h':	H();
					break;

		case 'i':	I();
					break;

		case 'j':	J();
					break;

		case 'k':	K();
					break;

		case 'l':	L();
					break;

		case 'm':	M();
					break;

		case 'n':	N();
					break;

		case 'o':	O();
					break;

		case 'p':	P();
					break;

		case 'q':	Q();
					break;

		case 'r':	R();
					break;

		case 's':	S();
					break;

		case 't':	T();
					break;

		case 'u':	U();
					break;

		case 'v':	V();
					break;

		case 'w':	W();
					break;

		case 'x':	X();
					break;

		case 'y':	Y();
					break;

		case 'z':	Z();
					break;

		case '.':	PERIOD();
					break;

		case ',':	COMMA();
					break;

		case ' ':	LG
					break;
		}
	}
}