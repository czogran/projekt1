#pragma once


class Divpanc
{
	int czolgi;
	int ludzie;
	int jestem_warminr;
	friend class Armia;
	friend class Lad;
	friend class Gwardia;
	void ta_armia(int nr1);


public:
	Divpanc(int cz = 10, int l = 40);
	Divpanc(const Divpanc&d);
	int daj_numer() { return nr; };
	Divpanc & operator=(const Divpanc & b);
	static int nr;
//	friend ostream& operator<< (ostream&, Divpanc const&);
	//friend ostream& operator<< (ostream&, Armia const&);

	~Divpanc();
};