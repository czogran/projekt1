#include "ot.h"

Ot::Ot(int ilos = 6, int i = 1, int czas = 5, string w = "Adolf", string krzyk="hurraaa")
{
	ilosc_poborowych = ilos;
	czas_szkolenia = czas;
	okrzyk = krzyk;
	wodz = w;
	ile_panc = 0;
	ile_piechota = i;
	for (int i = 0;i < ile_piechota; i++)
	{
		piechota.push_back(pp);
	}
	nr_armi++;///niedzia³a jak powinno
	nr_tej = nr_armi;
	//cout << nr_armi << endl;
}

Ot::Ot(int ilos, int ile_piech)
{
	ilosc_poborowych = ilos;
	ile_piechota = ile_piech;
	for (int i = 0;i < ile_piechota; i++)
	{
		piechota.push_back(pp);
	}
	nr_armi++;///niedzia³a jak powinno
	nr_tej = nr_armi;
}

Ot::Ot(const Ot & o)
{
	Ot a;
	a = o;

}

Ot & Ot::operator+(int b)
{
	
	ile_piechota = +b;
	for (int d = 0; b < ile_piechota - b; d++)
	{
		piechota.push_back(pp);
	}
	cout << "dddddddddddddddddddd";
	return *this;
}

Ot & Ot::operator=(const Ot & aa)
{
	
	if (&aa == this) return *this;
		ile_panc = 0;
		czas_szkolenia = aa.czas_szkolenia;
		ile_piechota = aa.ile_piechota;
		piechota.clear();
		
		for (int b = 0; b < ile_piechota; b++)
		{
			piechota.push_back(pp);                       ///(aa.piechota[b]);->czemu nie chce mi dac ten obiekt
			
		}

		cout << "OT-to operator przypisania nr: " << aa.nr_tej << " div pan " << aa.ile_panc << "piech " << aa.ile_piechota << endl;
		cout << "OTstan armii przypisanej nr:" << nr_tej << " div panc " << ile_panc << " piechta " << ile_piechota << endl;

		return *this;
	
}

Ot & Ot::operator()(int a, int b, string h)
{
	cout << "To my wspaniala OT," << endl;
	propa(a, b, h);
	cout << endl;
	return *this;
}

Ot & Ot::operator()(string h, int a, int b)
{
	cout << "My zolnierze OT" << endl;
	zwprop(a, b, h);
	cout << endl;
	return *this;
}

bool Ot::operator==(const Ot & a) const
{
	
	if (a.ile_piechota == ile_piechota)
	{
		cout << "mamy po tyle samo jednostek" << endl;
		return true;
	}
	else
	{
		cout << "nie mamy tyle samo jednostek" << endl;
		return false;
	}
}

