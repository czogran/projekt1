#include <iostream>
#include<conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "menu.h"
#include "londowe.h"
#include "gwardia.h"

using namespace std;

void menu()
{	
	int i = 0;
	int a,b,c,d,e;
	system("cls");
	cout << "Witamy w programie do zarz¹dzania najlepsza armia swiata" << endl;
	while (i < 4)
	{
		cout << "wpisz ile chcesz OT" << endl;
		cin >> a;
		while(cin.fail()==1)
		
		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> a;
		}

		cout << "wpisz ile chcesz wosjk ladowych" << endl;
		cin >> b;
		while (cin.fail() == 1)

		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> b;
		}
		cout << "wpisz ile chcesz gwardii" << endl;
		cin >> c;
		while (cin.fail() == 1)

		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> c;
		}
		system("cls");
		//cout << "mamy" << endl << a << " Ot" <<endl<< b << " ladowych" <<endl<< c << " gwardii" << endl;
		/*cout << "czy chcesz podac paramtry, ktorejs z jednostek?? 1tak, 2 nie" << endl << "tak<->nie"<<endl;
		int q;
		//cout << endl;
		cin >> q;
		while (q!=1 &&q!=2)

		{
			cout << "daj liczbe 1 lub 2" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> q;
			//cout << q;
		}
		if (q == 2)
		{
			cout << "tak<->NIE" << endl;
		}
		if (q == 1)
		{
			cout  << " TAK<->nie" << endl;
			cout << "1 Ot" << endl
				<< "2 lad" << endl
				<< "3 gwardia" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> q;


		}
		*/
		int aa, bb, cc, dd, ee, ff;
		vector <Ot> obrona;
		vector <Lad> landowe;
		vector <Gwardia> gw;
		srand(time(NULL));
		for (int i = 0; i < a ; i++)
		{
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			obrona.push_back(Ot(aa, bb, cc, "Guderian", "hurrrraaa"));
		}

		for (int i = 0; i < b; i++)
		{
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			landowe.push_back(Lad(aa,bb,cc,"Mod"));
		}
		
		for (int i = 0; i < c ;i++)
		{
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			gw.push_back(Gwardia(aa,bb,cc));
		}

		i=8;
	}

}