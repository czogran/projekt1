#pragma once
#include <vector>
#include <string>

#include"army.h"
#include "zmechanizowane.h"

class Lad:public Armia
{
	protected:
	int okres_sluzby;
	static int ile_lad;
	int nr_tej_lad;

public:
	Lad( int pan=12, int piech=1, int okres=10, string wdz="Models");
	
	//Lad(const Lad&a);

	virtual int suma_piech();
	virtual int suma_dzial();
	virtual int suma_czol();
	virtual void plik();
	virtual void zpliku(int nr_jed);

	friend ostream& operator<< (ostream&, Lad const&);
	friend istream&operator>> (istream&, Lad const&);
	Lad &operator+ (const int b);
	Lad &operator()(int a, int b, string h);					//3a
	Lad &operator()(string h, int a, int b);
	bool operator ==(const Lad& a) const;
};