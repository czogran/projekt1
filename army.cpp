#include"army.h"
#include<iostream>
#include<cstdlib>
#include <string>
#include<corecrt.h>
#include <vector>


using namespace std;
Armia::Armia(int c, int p)
{
	Piechota a;
	Divpanc d;
	ile_panc = c;
	ile_piechota = p;
	nr_armi++;
	nr_tej = nr_armi;
	wodz = "Adolf";
	//pancerne = new Divpanc[ile_panc];
//	piechota = new Piechota[ile_piechota];
	for (int i = 0;i < ile_piechota;i++)
	{
		piechota.push_back(a);
	}
	for (int i = 0; i < ile_panc; i++)
	{
		pancerne.push_back(d);
		//pancerne[i].ta_armia(nr_tej);
	}
	
	#ifdef _DEBUG
		cout << "Nowa armia ku mej chwale nr:" << nr_armi << endl;
	#endif
}

Armia::Armia(int c, int p, string w)
{
	ile_panc = c;
	ile_piechota = p;
	wodz = w;
	nr_armi++;
	nr_tej = nr_armi;
#ifdef _DEBUG
	cout <<" konstruktor2 armi "<< nr_armi << endl;
#endif // _DEBUG

}


int Armia::nr_armi = 0;


Armia::Armia(const Armia & a)
{
	ile_panc = a.ile_panc;
	ile_piechota = a.ile_piechota;
	nr_armi = ile_armii() + 1;
	nr_tej = nr_armi;
	cout << "to konstruktor kopiujacy" << endl;
	
//	piechota = new Piechota[ile_piechota];
	piechota.clear();
	//pancerne = new Divpanc[ile_panc];
	pancerne.clear();
	for (int i = 0; i < ile_panc; i++)
	{
		pancerne.push_back(a.pancerne[i]);
		//pancerne[i] = a.pancerne[i];
	}
	for (int b = 0; b < ile_piechota; b++)
	{
		piechota.push_back(a.piechota[b]);
		//piechota[b] = a.piechota[b];
	}
	cout << "stan armi bazowej:  "<<a.nr_tej<<" div pan "<<a.ile_panc<<" piech "<<a.ile_piechota<< endl;
	cout << "stan armii skopiowanej " << nr_tej << " div panc " << ile_panc << " piechta " << ile_piechota << endl;
	
}

void Armia::propa(int a, int b, string g)
{
	p1.wymysl_zwyciestwo(a, b, g);
	
	p1.gazeta();
}
void Armia::zwprop(int a, int b, string g)
{
	p1(a, b, g);
}

int Armia::suma_piech()
{
	int a = 0;
	for(int i=0;i<ile_piechota;i++)
	{
		a = a + piechota[i].ludzie; 
	}
	for (int i = 0; i<ile_panc; i++)
	{
		a = a  +pancerne[i].ludzie;
	}
	return a;
}

int Armia::suma_dzial()
{
	int a = 0;
	for (int i = 0; i<ile_piechota; i++)
	{
		a = a + piechota[i].dziala;
	}
	return a;
}

int Armia::suma_czol() 
{
	int a = 0;
	for (int i = 0; i<ile_panc; i++)
	{
		a = a + pancerne[i].czolgi;
	}
	return a;
}

void Armia:: zmien_panc(int nr1, int c, int lu)
{
	cout << ile_panc <<"    "<<nr1<< endl;
	if (ile_panc >= nr1)
	{
		
		pancerne[nr1 -1].czolgi = c;
		pancerne[nr1 -1].ludzie = lu;
	}
	else
	{
		cout << "za malo pancernych" << endl;
	}
}


	

Armia & Armia::operator+(const Piechota & p)
{
	piechota.push_back(p);
	//jak usun¹æ tutaj p;
	cout << "poaaa" << endl;
	return *this;
}

Armia& Armia::operator+(const int b)
{
	ile_panc = +b;
	ile_piechota = +b;
	//Piechota *tworz=new Piechota[ile_piechota];
	//Divpanc *zapas= new Divpanc[ile_panc];

	for (int i = 0; i < ile_panc - b; i++)
	{
		
		pancerne.push_back(Divpanc());

	}
	for (int d = 0; b < ile_piechota - b; d++)
	{
		piechota.push_back(Piechota());
		//zapas[d] = pancerne[d];
	}
	//delete[] piechota;
	//delete[] pancerne;
	//piechota = tworz;
	//pancerne = zapas;
	
	return *this;

}

Armia & Armia:: operator()(int a, int b, string h)
{
	propa(a, b, h);
	return *this;
}

Armia & Armia::operator()(string h, int a, int b)
{
	zwprop(a, b, h);
	return *this;
}

Armia & Armia::operator=(const Armia & aa)
{
	if (&aa == this) return *this;
	/*
	
	for (int i = 0; i < ile_panc; i++)
	{
		delete pancerne;
	}
	cout << "aaaaaa" << endl;
	for (int b = 0; b < ile_piechota; b++)
	{
		delete piechota;
	}*/
	//delete[] pancerne;
	//delete[] piechota;
	//delete (pancerne-1);
	//delete pancerne;
	//delete piechota;
	
	ile_panc = aa.ile_panc;
	ile_piechota = aa.ile_piechota;
	//piechota = new Piechota[ile_piechota];
	piechota.clear();
	pancerne.clear();
	//pancerne = new Divpanc[ile_panc];
	for (int i = 0; i < ile_panc; i++)
	{
		pancerne.push_back(aa.pancerne[i]);
		//pancerne[i] = aa.pancerne[i];
	}
	for (int b = 0; b < ile_piechota; b++)
	{
		piechota.push_back(aa.piechota[b]);
		//piechota[b] = aa.piechota[b];
	}

	cout << "to operator przypisania stan armi bazowej: " << aa.nr_armi << " div pan " << aa.ile_panc << "piech " << aa.ile_piechota << endl;
	cout << "stan armii przypisanej" << nr_armi << " div panc " << ile_panc << " piechta " << ile_piechota << endl;

	return *this;
}

void Armia::operator[](string gn)
{
	wodz = gn;
	cout << "nowym wodzem jest " << wodz << endl;
}

void Armia::operator[](int a)
{
	
	if (ile_panc >= a)
	{
		cout << "jednostka nalezaca do armi: " << nr_tej << " ma tyle czolgow " << pancerne[a-1].czolgi << " a tyle piechoty " << pancerne[a-1].ludzie << endl;
	}
	else cout << "nie ma tyle pancernych" << endl;
}




bool Armia::operator==(const Armia & a) const
{
	
	if (a.ile_panc == ile_panc && a.ile_piechota == ile_piechota)
	{
		cout << "maja tyle samo jednostek" << endl;
		return true;
	}
	else
	{
		if (a.ile_panc == ile_panc) cout << "maja tyle samo jed panc" << endl;
		if (a.ile_piechota == ile_piechota) cout << "maja tyle samo jed piechoty" << endl;
		return false;
	}
	
}

bool Armia::operator<(const Armia & a) const
{
	if (p1.wygrane_bitwy < a.p1.wygrane_bitwy)
	{
		cout << "druga jest lepsza" << endl;
		return true;
	}
	else
	{

		if (p1.wygrane_bitwy == a.p1.wygrane_bitwy)
		{
			cout << "sa tak samo dobre" <<p1.wygrane_bitwy<< "    "<<a.p1.wygrane_bitwy <<endl;
		}
		else
		{
			cout << "pierwsza jest lepsiejsza" << endl;
		}
		return false;
	}
}

bool Armia::operator>( Armia & aa) 
{
	int c, d, e, f, g, h;
	
	c = aa.suma_czol();
	d = suma_czol();
	e = aa.suma_dzial();
	f = suma_dzial();
	g = aa.suma_piech();
	h = suma_piech();
	if (d>c  &&  f>e  && h>g)
	{
		cout << "pierwsza jest lepsza" << endl;
		return true;
	}
	else
	{
		cout << "druga moze bc wieksza" << endl;
		return false;
	}
	
}

void Armia::operator&&(const Armia & a)
{
	if (a.wodz == "Adolf"&&wodz == "Adolf")cout << "Zmiencie wodza, bo przegracie" << endl;
	if (a.wodz == "Adolf"||wodz == "Adolf")cout << "Zmiencie wodza, w jednej armi, bo przegracie" << endl;
	else cout << "macie spoko wodzow  " << wodz << "   "<<a.wodz<< endl;
	
}
/*
inline Armia::operator float() const
{
	float a;
	a= p1.jency *1.0f / p1.wygrane_bitwy;
	cout << "na bitwe wzielismy " << a << " jencow" << endl;
	return a;
}*/





ostream & operator<<(ostream & wyjscie , Armia const & a)
{
	
	wyjscie << "ARMYile armii: "<< a.nr_armi<< "Liczba piechoty " << a.ile_piechota<< " dywizje pancerna: " << a.ile_panc << endl;
	return wyjscie;
}

Armia::~Armia()
{	
	#ifdef _DEBUG
		cout << "niszcze najlepsiejsza armie swiata"<<nr_armi<<" tej armii "<<nr_tej<<endl;
	#endif	
	//delete[] pancerne;
	//delete[] piechota;
	//delete[]pancerne;
	nr_armi--;
}