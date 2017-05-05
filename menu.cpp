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
		if (a < 0)a = a*(-1);
		while(cin.fail()==1)
		
		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> a;
			if (a < 0) ;
			//e = cin.fail();
		}

		cout << "wpisz ile chcesz wosjk ladowych" << endl;
		cin >> b;
		if (b < 0)b = b*(-1);
		while (cin.fail() == 1)

		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> b;
		}
		cout << "wpisz ile chcesz gwardii" << endl;
		cin >> c;
		if (c < 0)c = c*(-1);
		while (cin.fail() == 1)

		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> c;
		}
		system("cls");
		cout << "mamy" << endl << a << " Ot" <<endl<< b << " ladowych" <<endl<< c << " gwardii" << endl;
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
		vector <Lad> ladowe;
		vector <Gwardia> gw;
		//cout << "to jest a" << a;
		srand(time(NULL));
		for (int i = 0; i < a ; i++)
		{
			//cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			//cout << aa << bb << cc << endl;
			//obrona.push_back(Ot(aa,bb,cc,"models","Hurrraaa"));
			obrona.push_back(Ot(aa, bb,cc,"sss:","sss"));
		}

		for (int i = 0; i < b; i++)
		{
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			ladowe.push_back(Lad(aa,bb,cc,"Mod"));
		}
		
		for (int i = 0; i < c ;i++)
		{
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
			gw.push_back(Gwardia(aa,bb,cc));
		}
		int aq = 1;
		while (aq > 0)
		{
			cout << "1.zapisz do pliku" << endl << "2.wczytaj z pliku" << endl << "3. testuj operatory " << endl << "4. zakoncz zabawe" << endl;
			int q;
			cin >> q;
			while (q != 1 && q != 2 && q != 3 && q != 4)
			{
				cout << "daj liczbe 1 do 4" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				cin >> q;
				//cout << q;
			}
			if (q == 4) break;
			if (q == 1)
			{
				Armia *wskna;
				int qq, qw;
				string qe;
				cout << "podaj parametry jednostki, która chcesz zapisac do pliku Ot,Lad, Gw,liczba jed" << endl;
				cin >> qe;
				while (qe != "Ot" && qe != "Lad" && q != 3 && qe != "Gw")
				{
					cout << "wpisz nazwe jednostki" << endl;
					cin.clear();
					cin.ignore(100, '\n');
					cin >> qe;
					//cout << q;
				}
				if (qe == "Ot")
				{
					cin >> qq;
					if (qq > obrona.size())
						cout << "nie moge wpisac";
					else
						obrona[qq - 1].plik();
				}
				if (qe == "Gw")
				{
					cin >> qq;
					if (qq > gw.size())
						cout << "nie moge wpisac";
					else
						gw[qq - 1].plik();
				}
				if (qe == "Lad")
				{
					cin >> qq;
					if (qq > ladowe.size())
						cout << "nie moge wpisac";
					else
						ladowe[qq - 1].plik();
				}
			}
			if (q == 2)
			{
				cout << "podaj parametry obiektu którego chcesz odczytaæ, Lad, Ot, Gw, nr" << endl;
				string qe;
				cin >> qe;
				Armia *wsk;
				while (qe != "Ot" && qe != "Lad" && q != 3 && qe != "Gw")
				{
					cout << "wpisz nazwe jednostki" << endl;
					cin.clear();
					cin.ignore(100, '\n');
					cin >> qe;
					//cout << q;
				}
				int qq;
				if (qe == "Ot")
				{
					wsk = &obrona[0];
					cin >> qq;
					if (qq > obrona.size())
						cout << "nie ma tyle Ot";
					else
						wsk->zpliku(qq);
				}
				if (qe == "Lad")
				{
					wsk = &ladowe[0];
					cin >> qq;
					if (qq > ladowe.size())
						cout << "nie ma tyle ladowych";
					else
						wsk->zpliku(qq);
				}
				if (qe == "Gw")
				{
					wsk = &gw[0];
					cin >> qq;
					if (qq > gw.size())
						cout << "nie ma tyle Gw";
					else
						wsk->zpliku(qq);
				}
			}

		}

		i=8;
	}

}