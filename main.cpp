#include<string>
#include<iostream>
#include <cstdlib>
#include <vector>
#include <fstream>

#include <tchar.h>
#include "divpanc.h"
#include "army.h"
#include "moj test.h"
#include "ot.h"
#include "zmechanizowane.h"
#include "londowe.h"
#include "gwardia.h"
#include "menu.h"

using namespace std;

int main()
{
	fstream plik("armijka.txt", ios::trunc);
	plik.open("armijka.txt", ios::out | ios::trunc);
	menu();
	plik.close();
	
	return 0;
}