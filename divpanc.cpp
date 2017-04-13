#include "divpanc.h"
#include<iostream>
#include<cstdlib>
using namespace std;






void Divpanc::ta_armia(int nr1)
{
	jestem_warminr = nr1;
}

Divpanc::Divpanc(int cz, int l)
{
	czolgi = cz;
	ludzie = l;
	nr = nr + 1;
	
	#ifdef _DEBUG
	cout << "utworzono divpanc " << nr << endl;
	#endif
}

Divpanc & Divpanc::operator=(const Divpanc & b)
{
	if (&b == this) return *this;
	else
	{
		czolgi = b.czolgi;
		ludzie = b.ludzie;
		nr = b.nr;
		
		return *this;
	}
}

int Divpanc::nr = 0;

Divpanc::~Divpanc()
{
	
	#ifdef _DEBUG
	cout << "zniszczono divpanc " << nr << endl;
	#endif
	nr--;
}