//zbuduj klase paczka o polach nr, cena, waga 
//zbuduj dwa konstruktory, funkcje wypisz, funkcje cena jednostkowa(wartosc/waga)zwracajaca cene jednostkowa, cena w euro, 
//(kurs euro jako parametr), ktora_lzejsza, 
//zbuduj trzy obiekty, jeden domyslny, drugi wypelniony w programie, trzeci wczytany i wywolaj wszystkie funkcje

#include <iostream>
using namespace std;

class paczka{
int nr, cena, waga;

public:
	paczka(){
	nr=1;
	cena=10;
	waga=15;
}
	
paczka (int nr, int cena, int waga);

void wypisz(){
	cout << nr << " " << cena << " " << waga;
}
	
};

paczka::paczka(int nr, int cena, int waga){
	
this->nr=nr;
this->cena=cena;
this->waga=waga;	
	
}

int main(){
paczka p1;
paczka p2(2,69,666);

p1.wypisz();
cout << endl;
p2.wypisz();


	
return 0;
}
