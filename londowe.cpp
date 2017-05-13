#include "londowe.h"
#include <fstream>

int Lad::ile_lad = 0;

Lad::Lad( int pan, int p,int okres, string wdz)
{
	ile_piechota = p;
	ile_panc = pan;
	okres_sluzby = okres;
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
	ile_lad++;
	nr_tej_lad = ile_lad;

}

int Lad::suma_piech()
{
	int a = 0;
	for (int i = 0;i<ile_piechota;i++)
	{
		a = a + piechota[i].ludzie;
	}
	for (int i = 0; i<ile_panc; i++)
	{
		a = a + pancerne[i].ludzie;
	}
	return a;
}

int Lad::suma_dzial()
{
	int a = 0;
	for (int i = 0; i<ile_piechota; i++)
	{
		a = a + piechota[i].dziala;
	}
	return a;
}

int Lad::suma_czol()
{

	int a = 0;
	for (int i = 0; i<ile_panc; i++)
	{
		a = a + pancerne[i].czolgi;
	}
	return a;
}

void Lad::plik()
{
	fstream plik("armijka.txt", ios::in | ios::out | ios::app);
	plik << "Lad " << nr_tej_lad << endl;
		//<< ile_piechota << " " << ile_panc << " " << okres_sluzby << endl;
	plik << *this;
		plik.close();
}

void Lad::zpliku(int nr_jed)
{
	ifstream plik;
	plik.open("armijka.txt");
	while (true) //pêtla nieskoñczona
	{
		int aq;
		string bs, cc, dd;
		int c, d, e, f;
		plik >> bs;
		//cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << bs <<"aaaa"<< endl;
		if (plik.good())
		{
			if (bs == "Lad")
			{
				plik >> aq;
				if (aq == nr_jed)
				{

					plik >> *this;

					//plik >> c >> d >> e >> cc;
					//cout << " ile_piechota " << c << " ilpanc " << d << " okres sluzby " << e << endl;
				}
				//cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
			}
		}
		else
			break; //zakoñcz wczytywanie danych - wyst¹pi³ jakiœ b³¹d (np. nie ma wiêcej danych w pliku)

	}
}




Lad & Lad::operator+(const int b)
{
	ile_panc = +b;
	ile_piechota = +b;
	

	for (int i = 0; i < b; i++)
	{

		pancerne.push_back(Divpanc());

	}
	for (int d = 0; d < b; d++)
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
		else cout << "lad ma rozne liczby jednostek" << endl;
		return false;
	}
}

ostream & operator<<(ostream &wyjscie, Lad const & a)
{
	wyjscie << (Armia&)a;
	
	//wyjscie << "LADnumer armii: " << a.nr_tej << "Liczba piechoty " << a.ile_piechota << " dywizje pancerna: " << a.ile_panc << endl;
	wyjscie << a.nr_tej_lad<< " " << a.okres_sluzby << endl;
	return wyjscie;
}

istream & operator>>(istream &wyj, Lad const &a)
{
	int nt, czas;
	//wyj >> (Armia&)a;
	wyj >> (Armia&)a;
	wyj >> nt >> czas;
	cout << nt << " " << czas << endl;
	return wyj;
}
