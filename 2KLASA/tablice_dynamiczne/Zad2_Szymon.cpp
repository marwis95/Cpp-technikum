#include <iostream>
using namespace std;
int a, b;

void zamien(int &x,int &y){ // funkcja przyjmuje ADRESY zmiannych
int temp = x;	//funkcja nie zwraca nic (void) bo przestawia zmienne w adresach

x = y;
y = temp;
}

void iloraz(float x, float y){ //dziele ju� na real'ach bo bed� u�amki
if (x>y) 
	if (y==0) cout << "No kurwa... dzielisz przez zero" << endl; 
		else cout << "Dziele " << x << " przez " << y << " wynik: " << x/y << endl;
	//no kurwa zwyk�y if else... to chyba rozumiesz
if (y>x) 
	if (y==0) cout << "No kurwa... dzielisz przez zero" << endl; 
		else cout << "Dziele " << y << " przez " << x << " wynik: " << y/x << endl;
}

int porownaj(int x, int y){
if (x>y) return x; //sprawdzasz i zwracasz warto�� (mozna na niej liczy� dalej co�, albo tylko wypisa�
	else return y;
} 

int main(){
	
cout << "Podaj pierwsza liczbe (Szymon to gej)" << endl;
cin >> a;
cout << "Podaj druga liczbe (Szymon to gej)" << endl;
cin >> b;

cout << "Podane liczby: " << a << " " << b << endl;
iloraz(a,b); //wypisanie jest w funkcju wiec tylko wywo�uje (bez cout)
cout << "Wieksza liczba to: " << porownaj(a,b) << endl; //funkcja nie wypisuje, wi�c robie to tu
zamien(a,b); //nie wypisuje bo tu tylko "mieszam" w adresach

cout << "Po zamianie przez referencje: " << a << " " << b << endl; //wypisuje zawartosci ju� zmienionych adresow

//Pami�taj, �e ciapaty to Tw�j wr�g, walczmy z nimi... wykopmy muslim�w spowrotem na bliski wsch�d

return 0; 
}
