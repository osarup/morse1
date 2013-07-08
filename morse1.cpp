//morse1 by Ojas Sarup
//morse1 is a text to morse code converter, currently in the alpha phase.
//and supports alphabets, periods and commas.
//
// morse1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "beepCodes.h"

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Enter text here (alphabets, periods commas only, case insensitive):\n\n");
	char string[1024];
	gets(string);

	parseWord(string);

	return 0;
}

