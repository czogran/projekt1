#include"gwardia.h"
#include <fstream>

int Gwardia::ile_gw = 0;

Gwardia::Gwardia(int p,int pa, int zm)
{
	ile_piechota = p;
	ile_panc = pa;
	ile_zmech = zm;
	
	//wodz = wdz;
	for (int i = 0; i < ile_zmech; i++)
	{
	mechaniczne.push_back(Zmech());
	}
	for (int i = 0; i < ile_panc; i++)
	{
		pancerne.push_back(Divpanc());
	}
	for (int i = 0; i < ile_piechota; i++)
	{
		piechota.push_back(Piechota());
	}
	//nr_armi++;
	nr_tej = nr_armi;
	ile_gw++;
	nr_tej_gwardii = ile_gw;
	cout << nr_tej<<endl;

}

Gwardia & Gwardia::operator+(const int b)
{
	ile_panc = +b;
	ile_piechota = +b;
	ile_zmech = +b;

	for (int i = 0; i < ile_panc - b; i++)
	{

		pancerne.push_back(Divpanc());

	}
	for (int d = 0; d <  b; d++)
	{
		piechota.push_back(Piechota());
	}

	for (int d = 0;d < b;d++)
	{
		mechaniczne.push_back(Zmech());
	}
	return *this;
}

Gwardia & Gwardia::operator()(int a, int b, string h)
{
	cout << "To gwardia," << endl;
	propa(a, b, h);
	cout << endl;
	return *this;
}

Gwardia & Gwardia::operator()(string h, int a, int b)
{
	cout << "Wspania³a gwardia," << endl;
	zwprop(a, b, h);
	cout << endl;
	return *this;
}

bool Gwardia::operator==(const Gwardia & a) const
{
	if (a.ile_panc == ile_panc && a.ile_piechota == ile_piechota && a.ile_zmech==ile_zmech)//&& a.ile_zmech==ile_zmech)
	{
		cout << "maja tyle samo jednostek" << endl;
		return true;
	}
	else
	{
		if (a.ile_zmech == ile_zmech) cout << "maja tyle samo zmechanizowancyh" << endl;
		if (a.ile_panc == ile_panc) cout << "maja tyle samo jed panc" << endl;
		if (a.ile_piechota == ile_piechota) cout << "maja tyle samo jed piechoty" << endl;
		return false;
	}
	
}

void Gwardia::plik()
{
	fstream plik("armijka.txt", ios::in | ios::out | ios::app);
	plik << "Gw " << nr_tej_gwardii << endl;
	plik << *this;
	//	<< ile_piechota << " " << ile_panc << " "<< ile_zmech <<" " << okres_sluzby << endl;
	plik.close();
}

void Gwardia::zpliku(int nr_jed)
{
	ifstream plik;
	plik.open("armijka.txt");
	while (true) //pêtla nieskoñczona
	{
		int aq;
		string bs, cc, dd;
		int c, d, e, f;
		plik >> bs;
		//cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAgggggggggggggggggggggggg" << bs <<"aaaa"<< endl;
		if (plik.good())
		{
			if (bs == "Gw")
			{
				plik >> aq;
				if (aq == nr_jed)
				{
					cout << "Gw" << "" << aq << endl;;
					plik >> *this;
					//plik >> c >> d >> e >> f;
					//cout << " ile_piechota " << c << " ile panc " << d << " ile zmech " << e << " okres sluzby " << f << endl;
				}
				//cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
			}
		}
		else
			break; //zakoñcz wczytywanie danych - wyst¹pi³ jakiœ b³¹d (np. nie ma wiêcej danych w pliku)

	}

}

int Gwardia::suma_piech()
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
	for (int i = 0; i < ile_gw; i++)
	{
		a = a + mechaniczne[i].piechota;
	}
	return a;
}

int Gwardia::suma_dzial()
{
	int a = 0;
	for (int i = 0; i<ile_piechota; i++)
	{
		a = a + piechota[i].dziala;
	}

	for (int i = 0; i < ile_gw; i++)
	{
		a = a + mechaniczne[i].dziala;
	}

	return a;
}

int Gwardia::suma_czol()
{
	int a = 0;
	for (int i = 0; i<ile_panc; i++)
	{
		a = a + pancerne[i].czolgi;
	}
	for (int i = 0; i < ile_gw; i++)
	{
		a = a + mechaniczne[i].dziala;
	}
	return a;
}

ostream & operator<<(ostream & wyj, Gwardia const &g)
{
	wyj << (Lad&)g;
	wyj << g.ile_zmech << endl;
	return wyj;
}

istream & operator >> (istream &wyj, Gwardia const &g)
{
	int mch;
	wyj >> (Lad&)g;
	wyj >> mch;
	cout << mch << endl;
	return wyj;
}
