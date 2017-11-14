//Struktura samoch�d (marka, blacha, przebieg, rocznik, pojemnosc, stan silnika ??)
//funkcje: wypisz, lata, przebiegi
#include <cstdlib>
#include <iostream>
using namespace std;


struct fura{
string marka;
string blacha;
int przebieg;
int rocznik;
int pojemnosc;
};             
//#####################################################Tworze strzukture z parametrami samochodu



void wypisz(fura x){
cout << x.marka << " " << x.blacha << " " << x.przebieg << " " << x.rocznik << " " << x.pojemnosc ;	
}
//#####################################################################Funkcja do wypisania auta

void wczytaj(fura &y){
system("cls");
cout << "Wprowadz dane auta 2" << endl;
cout << "Marka: ";
cin >> y.marka;
cout << "Rejestracja: ";
cin >> y.blacha;
cout << "Przebieg: ";
cin >> y.przebieg;
cout << "Rocznik: ";
cin >> y.rocznik;
cout << "Pojemnosc: ";
cin >> y.pojemnosc;	
}
//######################################################Funkcja przez kt�r� user wporwadza auto2

int lata(fura z){
return 2013-z.rocznik;
}
//#################################################################Funkcja obliczaj�ca wiek auta

bool przebiegi(fura a, fura b){
if (a.przebieg>b.przebieg) return true;
	else return false;
}
//################Funkcja do liczenia przebieg�w (je�eli pierwsze auto ma wi�kszy to zwraca TRUE


fura auto1;    
//######################Powo�uj� zmienn� typu FURA (posiada "w�a�ciwo��i" okre�lone w strukturze
fura auto2;    
//###################################################################Powo�uje drug� zmienn� FURA


int main(){
auto1.marka="Maluch";
auto1.blacha="KR324GX";
auto1.przebieg=150000;
auto1.rocznik=1986;
auto1.pojemnosc=650;



wczytaj(auto2);
system("cls");
wypisz(auto1);
cout << endl;
wypisz(auto2);
cout << endl;

cout << "Wiek pierwszego auta: " << lata(auto1) << endl;
cout << "Wiek drogiego auta: " << lata(auto2) << endl;
if (przebiegi(auto1, auto2)==true) cout << "Pierwsze auto ma wiekszy przegieg";
	else cout << "Drugie auto ma wiekszy przebieg";
	

return 0;
}
