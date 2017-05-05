#include "ot.h"

int Ot::ile_ot = 0;

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
		piechota.push_back(Piechota());
	}
	//nr_armi++;///niedzia³a jak powinno
	nr_tej = nr_armi;
	ile_ot++;
	nr_tej_ot = ile_ot;
	//cout <<"OT "<< nr_tej_ot<<endl;
	//cout << nr_armi << endl;
}

Ot::Ot(int ilos, int ile_piech)
{
	ilosc_poborowych = ilos;
	ile_piechota = ile_piech;
	okrzyk = "brak";
	czas_szkolenia = 0;
	for (int i = 0;i < ile_piechota; i++)
	{
		piechota.push_back(Piechota());
	}
	//nr_armi++;///niedzia³a jak powinno
	nr_tej = nr_armi;
	ile_ot++;
	nr_tej_ot = ile_ot;
}

/*Ot::Ot(const Ot & o)
{
	Ot a;
	a = o;

}*/

void Ot::plik()
{
	fstream plik("armijka.txt", ios::in | ios::out | ios::app);
	plik << "Ot " << nr_tej_ot << endl
		<< ile_piechota << " " << ilosc_poborowych << " " << czas_szkolenia << " " << okrzyk << endl;
	plik.close();

}
void Ot::zpliku(int nr_jednostki)
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
			if (bs == "Ot")
			{
				plik >> aq;
				if (aq == nr_jednostki)
				{
					cout << endl << aq << endl;
					plik >> c >> d >> e >> cc;
					cout << " ile_piechota " << c << " ilosc_poborowych " << d << " czas_szkolenia " << e << " okrzyk " << cc << endl;
				}
				
			}
		}
		else
			break; //zakoñcz wczytywanie danych - wyst¹pi³ jakiœ b³¹d (np. nie ma wiêcej danych w pliku)

	}
}


string Ot::dodaj_do_pliku()
{
	string d;
	d = "to Ot";
	return d;
}

Ot & Ot::operator+(int b)
{
	
	ile_piechota = +b;
	for (int d = 0; b < ile_piechota - b; d++)
	{
		piechota.push_back(Piechota());
	}
	cout << "dddddddddddddddddddd";
	return *this;
}

/*Ot & Ot::operator=(const Ot & aa)
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
	
}*/

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

ostream & operator<<(ostream &wej, Ot const &aa)
{
	wej <<aa.nr_tej_ot<<" "<< aa.ile_piechota << " " << aa.okrzyk << endl;

		return wej;
}
