#include<string>
#include<iostream>
#include <cstdlib>
#include <vector>

#include <tchar.h>
#include "divpanc.h"
#include "army.h"
#include "moj test.h"
#include "ot.h"
#include "zmechanizowane.h"
#include "londowe.h"

using namespace std;

int main()
{
	Armia *wsk;
	
	Lad l;
	wsk = &l;
	wsk->operator()(1, 3, "222::");
	Ot b(4, 5);
	Ot d(2, 4);
	Armia *aa = new Ot(3,7);
	aa->a();
	Ot da = b;
	//b=d;
	b == d;
	return 0;
}