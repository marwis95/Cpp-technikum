/*
1.Deklaruje tab[n] (n podaje user)
2.Tworzy plik txt o podanej nazwie i wpisuje do niego n liczb (0,100)
3.Wprowadza z pliku do tab
4.Wyœwietla ca³¹ tabke

Problem?? program ma wypisaæ wszystkie liczby z sum¹ cyfr 5 o policzyæ iloœæ
wypisaæ rezutat problemu

*/
using namespace std;
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
//#include "obsluga_plikow.h"
//----------------------------------------------------Function
void menu();
void f_create_file(ofstream &utworz);
//----------------------------------------------------Variables
int repeat;
int n;
string nazwa;
//----------------------------------------------------Main
main(){
repeat=1;
do{
	menu();
	cout << endl;
	cout << "Uruchomic program jeszcze raz? (Nie-0 Tak-1) " ;
	cin >> repeat;
}while(repeat>0);

while(!kbhit());
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
cin >> n; //uzytkownik podaje ilosc elementow ktore ma miac tablica
int *tablica = new int[n]; //dynamiczne tworzenie tablicy
//tablica[0] = 666;
//cout << tablica[0]; 
ofstream zapisz;
f_create_file(zapisz);
}
break;
case 2:
cout << "2";
break;
default:
cout << "Nie ma takiej opcji" ;
break;
}
}

   
void f_create_file(ofstream &utworz){ //funkcja do tworzenia tablicy
 char nazwa[20];

 cout<<"\n Podaj nazwe pliku: ";
 cin>>nazwa;

 utworz.open(nazwa);

 if(!utworz){
   cout<<"\n Nie moge utworzyc pliku!";
   cin.ignore();
   getchar();
  
 }
 
 fopen.nazwa.txt
      while(!nazwa.eof())
 {
               // jeœli strumieñ wejœciowy nie jest pusty
      nazwa << "a" <<endl;
 }
}


         
