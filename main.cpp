#include<string>
#include<iostream>
#include <cstdlib>
#include <vector>

#include <tchar.h>
#include "divpanc.h"
#include "army.h"
#include "moj test.h"
#include "ot.h"

using namespace std;

int main()
{
	Ot b(4, 5);
	Ot d(2, 4);
	Armia *aa = new Ot(3,7);
	aa->a();
	Ot da = b;
	//b=d;
	b(3, 4, "222");
	return 0;
}