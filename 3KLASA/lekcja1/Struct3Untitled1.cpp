#include <cstdlib>
#include <iostream>

int ilosc, i;


using namespace std;

struct osoba{
char imie[15];
char nazwisko[20];
int wiek;	
};

osoba tab[10];

int main(){
cout << "Podaj ilosc osob: ";
cin >> ilosc;

for (i=1; i<=ilosc; i++){
	
cout << "Imie: ";
cin >> tab[i].imie ;
cout << endl;
cout << "Nazwisko: ";
cin >> tab[i].nazwisko ;
cout << endl;
cout << "Wiek: ";
cin >> tab[i].wiek ;
cout << endl;	

}	

cout << endl;
cout << "Lista:" << endl << endl;

for (i=1; i<=ilosc; i++){
cout << tab[i].imie << " " << tab[i].nazwisko << " " << tab[i].wiek << endl;	
}
	
return 0;
}
