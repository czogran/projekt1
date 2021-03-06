#pragma once
#include <iostream>
#include <string>
#include "army.h"
#include <fstream>


using namespace std;


class Armia;

class Ot :public Armia 
{
	int ilosc_poborowych;
	int czas_szkolenia;
	string okrzyk;
	static int ile_ot;
	int nr_tej_ot;

public:
	Ot(int ilos, int ile_piech, int czas, string wodz,string krzyk);
	Ot(int ilos, int ile_piech);
	//Ot(const Ot&o);
	
	void plik();
	void zpliku(int nr_jednostki);
	void dopliku();
	
	
	string dodaj_do_pliku();
	int suma_piech();
	int suma_dzial();

	//Ot &operator+(const Piechota&p);
	Ot & operator+(int b);	
	Ot  &operator()(int a, int b, string h);
	Ot &operator()(string h, int a, int b);
	bool operator ==(const Ot& a) const;
	friend ostream& operator<< (ostream&,Ot const&);
	friend istream& operator >> (istream&, Ot const&);
	void zmn_il_pob(int ile);
	
};