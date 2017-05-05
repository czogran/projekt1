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

void Gwardia::plik()
{
	fstream plik("armijka.txt", ios::in | ios::out | ios::app);
	plik << "Gw " << nr_tej_gwardii << endl
		<< ile_piechota << " " << ile_panc << " "<< ile_zmech <<" " << okres_sluzby << endl;
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
					plik >> c >> d >> e >> f;
					cout << " ile_piechota " << c << " ile panc " << d << " ile zmech " << e << " okres sluzby " << f << endl;
				}
				//cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
			}
		}
		else
			break; //zakoñcz wczytywanie danych - wyst¹pi³ jakiœ b³¹d (np. nie ma wiêcej danych w pliku)

	}

}

ostream & operator<<(ostream & wyj, Gwardia const &g)
{
	wyj << g.ile_zmech;
	return wyj;
}
