#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;


int repeat;
int tab_zd1[100], i, minn, maxx;
int liczba;
int tab[10];
float a,b,c;
int tab2[20];
int tab3[20][20];


float potega_it(int x){
int i;
float wynik;
wynik=1;

for(i=1;i<=5;i++)
	wynik = wynik * x;
return wynik;
}

int potega(int x, int n=5){
if (n==0)return 1;
	else
return x=x*potega(x,--n);
} 

void sort(int tab[]){ 
int n=10;
int j;
for(int i=0; i<n-1; i++)
	for(int j=0; j<n-1; j++)
	if(tab[j+1] < tab[j])
		swap(tab[j+1], tab[j]); 
for (j=0; j<10; j=j+1){	
	cout << tab[j] << " ";
}
}

float pole(float a, float b, float c){
float p=(a+b+c)/2;
cout << sqrt(p*(p-a)*(p-b)*(p-c)); 
}

float obwod(float a, float b, float c){
return a+b+c;
}

void jaki_trojkat(float a, float b, float c){
if ((a==b) && (b==c)) cout << "Rownoboczny"; else
	if ((a==b) && (a==c) && (b==c)) cout << "Rownoramienny"; else
		if ((a*a+b*b==c*c) && (a*a+c*c==b*b) && (c*c+b*b==a*a)) cout << "Prostokatny"; 
			else cout << "Jakis inny";
}

void odwroc (int tab2[]){
	int k;
	int rozmiar = 20;
	for(int k=0; k<rozmiar/2; k++) {
	int buff = tab2[k];
	tab2[k] = tab2[rozmiar-1-k];
	tab2[rozmiar-1-k] = buff;
}

	cout << endl;
	for(k=0;k<20;k++){
		cout << tab2[k] << " ";
	}
	
}

void menu(){
int wybor;
system("cls"); 
cout << "Menu:" << endl;
cout << "1.Tablice 100 elementowa wypelnij losowymi liczbami i znajdz min i max tablicy" << endl;
cout << "2.Funkcja rekurencyjna i iteracyjna liczaca potege n^5" << endl;
cout << "3.Wypisz z przedzialu (0,100) liczby podzielne przez 5 ale nie przez 3 malejaco" << endl;
cout << "4.Posortuj tablice zainicjowana 10-cioma dowolnymi liczbami metoda babelkowa" << endl; 
cout << "5.Trojkat" << endl;
cout << "6.Odwroc kolejnosc elementow w tablicy" << endl;
cout << "7.Tabliczka mnozenia" << endl;
cout << "8.W tablicy dwuwymiarowej zsumuj elementy parzyste nad przekatna" << endl;

cin >> wybor;

switch(wybor){ 
           
case 1:{
system("cls");
i=0;
minn=0;
maxx=0;
srand(time(NULL));
for (i=0; i<100; i=i+1){
	tab_zd1[i]= rand() % (100);
	if (tab_zd1[i]<minn) minn=tab_zd1[i];
	if (tab_zd1[i]>maxx) maxx=tab_zd1[i];
}
cout << "Min: " << minn << endl;
cout << "Max: " << maxx << endl;
break;
}

case 2:{
system("cls");
cout << "Podaj liczbe" << endl;
cin >> liczba;

cout << "Wyliczone teracyjnie: " << potega_it(liczba) << endl;;
cout << "Wyliczone rekurencyjnie: " << potega(liczba);	
break;
}

case 3:{
system("cls");
for (i=100; i>0; i=i-1)	{
	if ((i%5==0) && (i%3!=0)) cout << i << " " ;
}
break;
}

case 4:{
system("cls");
cout << "Przed sortem: ";
for (i=0; i<10; i=i+1){
	tab[i]= rand() % (100);	
	cout << tab[i] << " ";
}

cout << " " << endl;
cout << "Po sorcie: " ;
sort(tab);
break;
}


case 5:{
system("cls");
cout << "Podaj pierwszy bok" << endl;
cin >> a;
cout << "Podaj drugi bok" << endl;
cin >> b;
cout << "Podaj trzeci bok" << endl;
cin >> c;	
if(a<=0 || b<=0 || c<=0) cout << "Boki nie moga byc zero" ;
		else{
		cout << "Pole: " ;
		pole(a,b,c);
		cout << endl;
		cout << "Obwod: " << obwod(a,b,c);
		cout << endl;
		jaki_trojkat(a,b,c);
		}
break;
}

case 6:{
system("cls");
i=0;
for (i=0; i<20; i=i+1){
	tab2[i]= rand() % (100);
	cout << tab2[i] << " " ;
	}
odwroc(tab2);
cout << endl;
	
break;
}

case 7:{
system("cls");
i=0;
int j=0;
for (i=1; i<10; i++){
	for (j=1; j<10; j++){
	cout  << i*j << " " ;
	}
	cout << endl;
}	
	
break;
}

case 8: {
system("cls");
int j;
int suma=0;
srand(time(NULL));
for (i=0; i<20; i=i+1){
cout << endl;
for (j=0; j<20; j=j+1){
tab3[i][j]= rand() % (10);
cout << tab3[i][j] << " ";
if ((i<j) && (tab3[i][j]%2==0)) suma = suma + tab3[i][j];
}
}	
cout << endl;
cout << "Suma: " << suma;
break;
}

default:
cout << "Nie ma takiej opcji!" << endl;
break;
}
}





int main(){
repeat=1;
do{
	menu();
	cout << " " << endl;
	cout << "Czy chcesz kontynuowac (Nie-0 Tak-1) " << endl;
	cin >> repeat;
}while(repeat>0);

return 0;



}   


         

