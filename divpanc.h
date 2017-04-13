#pragma once


class Divpanc
{
	int czolgi;
	int ludzie;
	int jestem_warminr;
	friend class Armia;
	//friend class Korpus;
	void ta_armia(int nr1);


public:
	Divpanc(int cz = 10, int l = 40);
	int daj_numer() { nr; };
	Divpanc & operator=(const Divpanc & b);
	static int nr;
	~Divpanc();
};