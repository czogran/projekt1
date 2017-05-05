#include"gwardia.h"

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
	cout << nr_tej<<endl;

}







	
