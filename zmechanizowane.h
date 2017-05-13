#pragma once


class Zmech
{
	int czolgi;
	int dziala;
	int piechota;
	friend class Gwardia;
public:
	Zmech(int c=1, int dz=11, int p=21)
	{
		//cout << "mech" << endl;
		dziala = dz;
		p = piechota;
	czolgi=c;
	}
	friend ostream& operator<< (ostream& w, Zmech const&aa)
	{
		w << aa.czolgi << " " << aa.dziala << " " << aa.piechota << endl;
		return w;
	}
};