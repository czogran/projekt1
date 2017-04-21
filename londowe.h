#pragma once
#include <vector>
#include <string>

#include"army.h"
#include "zmechanizowane.h"

class Lad:public Armia
{
	int piech;
	int panc;
	int okres_sluzby;
	int ile_zmech;
	Zmech z;
	vector <Zmech> mechaniczne;

public:
	Lad(int ile_zm=1, int pan=12, int piech=1, string wdz="Models");
	Lad(int ile_zm);

	Lad &operator+ (const int b);
	Lad &operator()(int a, int b, string h);					//3a
	Lad &operator()(string h, int a, int b);

};