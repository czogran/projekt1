#pragma once
#include "londowe.h"
#include "zmechanizowane.h"

class Gwardia :public Lad
{
	
	int ile_zmech;
	static int ile_gw;
	int nr_tej_gwardii;
	
	vector <Zmech> mechaniczne;
	public:
		Gwardia (int p=10, int pa=10, int zm=10);
		friend ostream& operator<< (ostream&, Gwardia const&);
		friend istream& operator >> (istream&, Gwardia const&);
		Gwardia &operator+ (const int b);
		Gwardia &operator()(int a, int b, string h);					//3a
		Gwardia &operator()(string h, int a, int b);
		bool operator ==(const Gwardia& a) const;


		void plik();
		void zpliku(int nr_jed);
		int suma_piech();
		int suma_dzial();
		int suma_czol();
};