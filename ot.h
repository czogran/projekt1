#pragma once
#include <iostream>
#include <string>
#include "army.h"

using namespace std;


class Armia;

class Ot :public Armia 
{
	int ilosc_poborowych;
	int czas_szkolenia;
	string okrzyk;

public:
	Ot(int ilos, int ile_piech, int czas, string wodz,string krzyk);
	Ot(int ilos, int ile_piech);
	Ot(const Ot&o);

	Ot & operator+(int b);
	Ot  &operator=(const Ot& aa);
	Ot  &operator()(int a, int b, string h);
	//Armia &operator=(const Armia &aa);
	void a()
	{
		cout << "ucze sieaaaaa" << endl;
	}
};