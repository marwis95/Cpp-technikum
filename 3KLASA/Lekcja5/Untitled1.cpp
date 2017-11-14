#include <iostream>
#include <string>
using namespace std;



class ksiazka{
string tytul;
string autor;
float cena;
float ocena;

public:
	ksiazka(){
	tytul="Symfonia c++";
	autor="Jerzy Grebosz";
	cena=10;
	ocena=100;
	}
	
ksiazka(string tytul, string autor, float cena, float ocena);
	
void wypisz(string tytul, string autor, float cena, float ocena){
	cout << "Tytul: " << tytul << " Autor: " << autor << " Cena: " << cena << " Ocena : " << ocena << "/100";
	}
	


};

ksiazka::ksiazka(string tytul, string autor, float cena, float ocena){
this->tytul=tytul;
this->autor=autor;
this->cena=cena;
this->ocena=ocena;
}




int main(){
ksiazka a;
a.wypisz();
	
return 0;
}

