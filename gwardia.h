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
			
		void plik();
		void zpliku(int nr_jed);
};