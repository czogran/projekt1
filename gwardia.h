#pragma once
#include "londowe.h"
#include "zmechanizowane.h"

class Gwardia :public Lad
{
	
	int ile_zmech;
	vector <Zmech> mechaniczne;
	public:
		Gwardia (int p=10, int pa=10, int zm=10);
		

};