#pragma once
#include <vector>
#include <string>

#include"army.h"
#include "zmechanizowane.h"

class Lad:public Armia
{
	protected:
	int okres_sluzby;
	

public:
	Lad( int pan=12, int piech=1, string wdz="Models");
	
	Lad(const Lad&a);


	friend ostream& operator<< (ostream&, Lad const&);
	Lad &operator+ (const int b);
	Lad &operator()(int a, int b, string h);					//3a
	Lad &operator()(string h, int a, int b);
	bool operator ==(const Lad& a) const;
};