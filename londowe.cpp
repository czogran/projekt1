#include "londowe.h"

Lad::Lad( int pan, int p, string wdz)
{
	ile_piechota = p;
	ile_panc = pan;
	wodz = wdz;
	
	for (int i = 0; i < pan; i++)
	{
		pancerne.push_back(Divpanc());
	}
	for (int i = 0; i < ile_piechota; i++)
	{
		piechota.push_back(Piechota());
	}
	nr_tej = nr_armi;
	

}



Lad & Lad::operator+(const int b)
{
	ile_panc = +b;
	ile_piechota = +b;
	

	for (int i = 0; i < ile_panc - b; i++)
	{

		pancerne.push_back(Divpanc());

	}
	for (int d = 0; b < ile_piechota - b; d++)
	{
		piechota.push_back(Piechota());	
	}

	return *this;
}

Lad & Lad::operator()(int a, int b, string h)
{
	cout << "To wojsko londowe," << endl;
	propa(a, b, h);
	cout << endl;
	return *this;
}

Lad & Lad::operator()(string h, int a, int b)
{
	cout << "Wojska londowe," << endl;
	zwprop(a, b, h);
	cout << endl;
	return *this;
}



bool Lad::operator==(const Lad & a) const
{
	if (a.ile_panc == ile_panc && a.ile_piechota == ile_piechota)//&& a.ile_zmech==ile_zmech)
	{
		cout << "maja tyle samo jednostek" << endl;
		return true;
	}
	else
	{
		if (a.ile_panc == ile_panc) cout << "maja tyle samo jed panc" << endl;
		if (a.ile_piechota == ile_piechota) cout << "maja tyle samo jed piechoty" << endl;
		return false;
	}
}

ostream & operator<<(ostream &wyjscie, Lad const & a)
{
	wyjscie << "numer armii: " << a.nr_tej << "Liczba piechoty " << a.ile_piechota << " dywizje pancerna: " << a.ile_panc << endl;
	return wyjscie;
}
