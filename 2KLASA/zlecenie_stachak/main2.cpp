using namespace std;
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <windows.h>


int repeat, problem=1;
int n;
string nazwa;
int i;
int suma;
HANDLE hOut; //uchwyt do konsoli



void utworz(string x){ //funkcja tworzaca plik o podanej nazwie
ofstream plik((x + ".txt").c_str());  //konwersja string na c_string i dopisanie rozwszerzenia
plik.close(); //zamykam dokument
}

void losuj(int n, string x){
//int tab[n];
srand(time(NULL));
for (i=0; i<n; i=i+1){
	ofstream plik((x + ".txt").c_str()); //tworzê plik
	for(int i=0; i<n; i++) //zapis kazdej wylosowanej liczby do tablicy
   	plik<<rand() % (100-1)<<endl; //losowanie liczby do tablicy
	plik.close(); //zamykam dokument	
}

}




void menu(){
int wybor;
system("cls"); 
cout << "Menu: " << endl; 
cout << "1. Program " << endl;
cout << "2. Problem " << endl;
cin >> wybor;

switch(wybor){            
case 1:{
cout << "Podaj ilosc elementow tablicy" << endl;
cin >> n;
cout << "Podaj nazwa pliku do utworzenia" << endl;
cin >> nazwa;
utworz(nazwa); //fukcja tworzaca plik txt
losuj(n,nazwa); //funkcja losujaca liczby do pliku

int *tab = new int[n]; //dynamicznie powoluje tablice
ifstream plik ((nazwa + ".txt").c_str()); //otwieram plik z ktorego ja wypelnie
for (i=1; i<n; i=i+1){//eof to koniec tabki
plik >> tab[i]; //wprowadzam
cout << tab[i] << " | " ; //od razu wypisuje zawartosc tablicy
} 

problem = 2;
}
break;
case 2:{
if (problem == 1) {
	cout << "Najpierw wykonaj case 1" ; //sprawdzam czy case 1 zosta³ wykonany (je¿eli nie to nie ma tablicy)
	break;
	}

if (problem == 2) {
int *tab = new int[n]; //dynamicznie powoluje tablice
ifstream plik ((nazwa + ".txt").c_str()); //otwieram plik z ktorego ja wypelnie
for (i=1; i<n; i=i+1){//eof to koniec tabki
plik >> tab[i]; //wprowadzam
}
	
for (i=1; i<n; i=i+1){
	if ((tab[i]%10)+(tab[i]/10)==5) { //sprawdzam "problem"
	cout << tab[i] << endl;
	suma=suma+1;
	}
	}
}
hOut = GetStdHandle( STD_OUTPUT_HANDLE ); //uchwytem przejmujê okno konsoli
SetConsoleTextAttribute( hOut, FOREGROUND_RED ); //zmieniam kolor napisu na czerwony
cout << "Problem: " << suma;
SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //zmieniam kolor spowerotem na bia³y
suma=0;
}

break;
default:
cout << "Nie ma takiej opcji" ;
break;
}
}

main(){
problem=1;
do{
	menu();
	cout << endl;
	cout << "Uruchomic program jeszcze raz? (Nie-0 Tak-1) " ; //zapêtlenie programu
	cin >> repeat;
}while(repeat>0);

while(!kbhit());
}


