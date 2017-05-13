#pragma once

#include<string.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Piechota
{
	int dziala;
	int ludzie;
	string gen;
	friend class Armia;
	friend class Ot;
	friend class Lad;
	friend class Gwardia;
public:
	Piechota(int dz = 10, int l = 40, string g="Hans");
	Piechota & operator=(const Piechota &a);
	~Piechota();
};