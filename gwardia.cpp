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

ostream & operator<<(ostream & wyj, Gwardia const &g)
{
	wyj << g.ile_zmech;
	return wyj;
}
