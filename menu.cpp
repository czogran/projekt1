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
		if (a < 0)
			a = a*(-1);
		while(cin.fail()==1)
		
		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> a;
			if (a < 0) 
				a = a*(-1);
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
		
		int aa, bb, cc, dd, ee, ff;
		vector <Ot> obrona;
		vector <Lad> ladowe;
		vector <Gwardia> gw;
		
		srand(time(NULL));
		for (int i = 0; i < a ; i++)
		{
			
			aa = (rand() % 10) + 2;
			bb = (rand() % 10) + 2;
			cc = (rand() % 10) + 2;
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
			cout << "1.zapisz do pliku" << endl << "2.wczytaj z pliku" << endl << "3. testuj funkcje " << endl<<"4.testuj operatory"
				<<endl << "5. zakoncz zabawe" << endl;
			int q;
			cin >> q;
			while (q != 1 && q != 2 && q != 3 && q != 4&&q!=5)
			{
				cout << "daj liczbe 1 do 5" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				q = bezpieczny_int(5);
				//cout << q;
			}
			if (q == 5) break;
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

///testy operatorów i funkcji
			if (q == 3)
			{
				Armia *wsk;
				int a;
				cout << "Podaj jednostke z ktorech chcesz wywolywaæ" << endl;
				string qe;
				cin >> qe;
				while (qe != "Ot" && qe != "Lad"  && qe != "Gw")
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
					if (obrona.size() == 0) cout << "nie masz czego testowac" << endl;
					
					else
					{
						qq = bezpieczny_int(obrona.size()+1);
						wsk = &obrona[qq - 1];
						cout << "Podaj nr funkcji, ktora chcesz przetestowaæ" << endl
							<< "1.fun ile piechota" << endl
							<< "2. fun ile dzial" << endl;
						int as;
						as = bezpieczny_int(2);
						if (as == 1)
						{

							cout << wsk->suma_piech() << endl;;
						}
						if (as == 2)
						{
							cout << wsk->suma_dzial() << endl;
						}
					}
				}
				if (qe == "Lad")
				{
					if (ladowe.size() == 0) cout << "nie masz czego testowac" << endl;
					else
					{
						qq = bezpieczny_int(ladowe.size()+1);
						/*cin >> qq;
						if (qq > ladowe.size())
							cout << "nie ma tyle ladowych";*/

						wsk = &ladowe[qq - 1];
						cout << "Podaj nr funkcji, która chcesz przetestowaæ" << endl
							<< "1.fun ile piechota" << endl
							<< "2. fun ile czolgow" << endl;
						int as;
						as = bezpieczny_int(2);
						if (as == 1)
						{

							cout << wsk->suma_piech() << endl;;
						}
						if (as == 2)
						{
							cout << wsk->suma_czol() << endl;
						}
						//else
						//wsk->zpliku(qq);
					}
				}
				if (qe == "Gw")
				{
					if (gw.size() == 0) cout << "nie masz czego testowac" << endl;
					else {


						wsk = &gw[0];
						qq = bezpieczny_int(gw.size()+1);
						int gg;
						cout << "Podaj nr funkcji, ktora chcesz przetestowaæ" << endl
							<< "1.fun ile piechota" << endl
							<< "2. fun ile czolgow" << endl
							<< "3.fun ile dzia" << endl;
						gg = bezpieczny_int(3);
						if (gg == 1)
						{

							cout << wsk->suma_piech() << endl;;
						}
						if (gg == 2)
						{
							cout << wsk->suma_czol() << endl;
						}
						if (gg == 3)
						{
							cout << wsk->suma_dzial() << endl;
						}
						//else
						//wsk->zpliku(qq);
					}
				}


			}
			//testy operatorów
			if (q == 4)
			{
				Armia *wsk;
				int a;
				cout << "Podaj jednostke z ktorech chcesz wywolywaæ" << endl;
				string qe;
				cin >> qe;
				while (qe != "Ot" && qe != "Lad"  && qe != "Gw")
				{
					cout << "wpisz nazwe jednostki" << endl;
					cin.clear();
					cin.ignore(100, '\n');
					cin >> qe;
					//cout << qe;
					//cout << q;
				}
				int qq;
				if (qe == "Ot"&&obrona.size() == 0)
				{
					if (obrona.size() == 0) cout << "nie masz czego testowac" << endl;
				
				}
				if (qe == "Lad"&&ladowe.size() == 0)
				{
					if (ladowe.size() == 0) cout << "nie masz czego testowac" << endl;
				}
				if (qe == "Gw"&&gw.size() == 0)
				{
					if (gw.size() == 0) cout << "nie masz czego testowac" << endl;
				}
				else
				{
					
					if (qe == "Ot")
					{
						
							qq = bezpieczny_int(obrona.size() + 1);
							wsk = &obrona[qq - 1];

					}
					if (qe == "Lad")
					{
							qq = bezpieczny_int(ladowe.size() + 1);
							wsk = &ladowe[qq - 1];
					}
					
					if (qe == "Gw")
					{
						
							qq = bezpieczny_int(gw.size() + 1);
							wsk = &gw[qq - 1];
					}

					cout << "Podaj nr operatora, ktory chcesz przetestowaæ" << endl
						<< "1.op +a jednostek" << endl
						<< "2.op + jedna jednostka piechoty" << endl
						<< "3.op == porown jednostki" << endl
						<< "4.op (), który zwieksza propaganda i ja drukuje" << endl;
					int a;
					a = bezpieczny_int(4);
					if (a == 1)
					{
						int ile_jed;
						ile_jed = bezpieczny_int(30);
						wsk->operator+(ile_jed);
					}
					if (a == 2)
					{
						cout << "podaj parametry jednostki, która chcesz dodac" << endl;
						int dz, lu;
						string gen;
						cout << "general" << endl;
						cin >> gen;
						cout << "ludzie" << endl;
						lu = bezpieczny_int(10000);
						cout << "dziala" << endl;
						dz = bezpieczny_int(100);
						Piechota piech(dz,lu, gen);
						wsk->operator+(piech);
						
					}
					if (a == 3)
					{
						int ref;
						cout << "z ktora jednostki chcesz porownac" << endl;
						if (qe == "Gw")
						{
							ref = bezpieczny_int(gw.size() + 1);
							gw[qq] == gw[ref];
						}
						if (qe == "Ot")
						{
							ref = bezpieczny_int(obrona.size() + 1);
							obrona[qq] == obrona[ref];
						}
						if (qe == "Lad")
						{
							ref = bezpieczny_int(ladowe.size() + 1);
							ladowe[qq] == ladowe[ref];
						}
					}
					if (a == 4)
					{
						cout << "podaj parametry" << endl;
						int wyg_bit, jency; 
						string jen_gen;
						cout << "wygrane bitwy" << endl;
						wyg_bit = bezpieczny_int(11111);
						cout << "jency" << endl;
						jency = bezpieczny_int(333333);
						cout << "general" << endl;
						cin >> jen_gen;
						wsk->operator()(wyg_bit, jency, jen_gen);

					}
				}
			}
		}

		i=8;
	}

}
int bezpieczny_int(int zakres)
{
	int wynik=zakres+1;
	while (wynik > zakres)
	{
		cin >> wynik;
		if (wynik < 0)wynik = wynik*(-1);
		if (wynik > zakres)cout << "poadaj mniejszy int" << endl;
		if (wynik == 0)
		{
			cout << "zero nie moze byc" << endl;
			wynik = zakres + 5;
		}
		while (cin.fail() == 1)
		{
			cout << "daj liczbe" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> wynik;
			if (wynik < 0)wynik = wynik*(-1);
			if (wynik == 0)
			{
				cout << "zero nie moze byc" << endl;
				wynik = zakres + 5;
			}
		}
		
	}

	return wynik;
}
