#include "londowe.h"

Lad::Lad(int ile_zm, int pan, int p, string wdz)
{
	piech = p;
	panc = p;
	ile_zmech = ile_zm;
	wodz = wdz;
	for (int i = 0; i < ile_zm; i++)
	{
		mechaniczne.push_back(z);
	}
	for (int i = 0; i < pan; i++)
	{
		pancerne.push_back(pan);
	}
	for (int i = 0; i < piech; i++)
	{
		piechota.push_back(pp);
	}
	nr_armi++;
	nr_tej = nr_armi;


}

Lad::Lad(int ile_zm)
{
	ile_zmech = ile_zm;
	for (int i = 0; i < ile_zm; i++)
	{
		mechaniczne.push_back(z);
	}
	nr_armi++;
	nr_tej = nr_armi;
}

Lad & Lad::operator+(const int b)
{
	ile_panc = +b;
	ile_piechota = +b;
	ile_zmech = +b;

	for (int i = 0; i < ile_panc - b; i++)
	{

		pancerne.push_back(pan);

	}
	for (int d = 0; b < ile_piechota - b; d++)
	{
		piechota.push_back(pp);	
	}
	for (int d = 0; b < ile_zmech - b; d++)
	{
		mechaniczne.push_back(z);
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
