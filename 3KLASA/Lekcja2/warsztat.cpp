//tab warsztat[4], dane podaje user, wypisz auto o indeksie, przebieg (min, max, œr)

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


fura warsztat[4];
//######################################################Tworze tablce z samochodami

void wczytaj(fura &y){

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


void wypisz(fura x[], int y){
cout << x[y-1].marka << " " << x[y-1].blacha << " " << x[y-1].przebieg << " " << x[y-1].rocznik << " " << x[y-1].pojemnosc ;	
}
//######################Funkcja pobiera tablice z autami i indeks który mamy wypisaæ

int main(){
	
int i;
int nr;
float sr, min=10000000, max=0;

for (i=0; i<4; i=i+1){
	system("cls");
	cout << "Wprowadz dane auta " << i+1 << endl;
	wczytaj(warsztat[i]);
	if (warsztat[i].przebieg<min) min=warsztat[i].przebieg;//Sprawdzam min przebieg
	if (warsztat[i].przebieg>max) max=warsztat[i].przebieg;//Sprawdzam max przebieg
}



system("cls");
cout << "Podaj numer auta ktore chcesz zobaczyc: ";
cin >> nr;
//cout << warsztat[nr-1].marka << " " << warsztat[nr-1].blacha << " " << warsztat[nr-1].przebieg << " " << warsztat[nr-1].rocznik << " " << warsztat[nr-1].pojemnosc ;
wypisz(warsztat,nr);
cout << endl;
sr=(warsztat[1].przebieg + warsztat[2].przebieg + warsztat[3].przebieg + warsztat[4].przebieg)/4;
cout << "Sredni przebieg: " << sr << endl;
cout << "Max przebieg:" << max << endl;
cout << "Min przebieg:" << min << endl;
	
return 0;
}
