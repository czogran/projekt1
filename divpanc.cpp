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
	//cout << "a" <<nr<< endl;
	#ifdef _DEBUG
		//cout << "utworzono divpanc " << nr << endl;
	#endif
}

Divpanc::Divpanc(const Divpanc & d)
{
	czolgi = d.czolgi;
	ludzie = d.ludzie;

	nr++;
	//cout << "kopia" << endl;
}

Divpanc & Divpanc::operator=(const Divpanc & b)
{
	
	if (&b == this) return *this;
	else
	{
		czolgi = b.czolgi;
		ludzie = b.ludzie;
		nr = b.nr;
		cout << "div przypisania" << endl;
		return *this;
	}
}

int Divpanc::nr = 0;

Divpanc::~Divpanc()
{
	
	#ifdef _DEBUG
	//cout << "zniszczono divpanc " << nr << endl;
	#endif
	nr--;
}

/*ostream & operator<<(ostream &wyjscie, Divpanc const &aa)
{

	
		//wyjscie << "ile armii: " << a.nr_armi << "Liczba piechoty " << a.ile_piechota << " dywizje pancerna: " << a.ile_panc << endl;
	return wyjscie;
}*/
