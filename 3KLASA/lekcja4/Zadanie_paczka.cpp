//zbuduj klase paczka o polach nr, cena, waga 
//zbuduj dwa konstruktory, funkcje wypisz, funkcje cena jednostkowa(wartosc/waga)zwracajaca cene jednostkowa, cena w euro, 
//(kurs euro jako parametr), ktora_lzejsza, 
//zbuduj trzy obiekty, jeden domyslny, drugi wypelniony w programie, trzeci wczytany i wywolaj wszystkie funkcje

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class paczka {
double numer, cena, waga;

public:
	
	paczka(){  // do 0 0 
	numer=1;
	cena=20;
	waga=2;	
	}
	
	paczka(double numer, double cena, double waga); // do 0 10
	
	
	void wypisz(){
	cout << "Numer: " << numer << " Cena: " << cena << "zl Waga: " << waga;
	}
	
	double cena_jedn(double cena, double waga){
	return cena/waga;
	}
	
	double euro(double cena, double e){
	return cena*e;
	}
	
	
	
};	
	
paczka::paczka(double numer, double cena, double waga){
this->numer=numer;
this->cena=cena;	
this->waga=waga;
}



int main(){
double x,y,e;

cout << "Podaj kurs Euro: " << endl;
cin >> e;
system("cls");
cout << "Podaj parametry trzeciej paczki" << endl;
cout << "Numer = 3" << endl;
cout << "Cena = " ;
cin >> x;
cout << "Waga = " ;
cin >> y;

paczka a, b(2,10,0.5), c(3,x,y);

system("cls");

a.wypisz();
cout << endl;
b.wypisz();
cout << endl;
c.wypisz();
cout << endl << endl;

cout << "Ceny jednostkowe:" << endl;
cout << "Paczka 1: " << a.cena_jedn(20,2) << endl;
cout << "Paczka 2: " << b.cena_jedn(10,0.5) << endl;
cout << "Paczka 3: " << c.cena_jedn(x,y) << endl;
cout << endl ;
cout << "Ceny w Euro:" << endl;
cout << "Paczka 1: " << a.euro(20,e) << "eur" << endl;
cout << "Paczka 2: " << b.euro(10,e) << "eur" << endl; 
cout << "Paczka 3: " << c.euro(x,e) << "eur" << endl;
	
return 0;
}
