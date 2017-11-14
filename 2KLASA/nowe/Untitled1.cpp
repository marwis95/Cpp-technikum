#include<conio.h>
#include<stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

void srednia(int a[10]){
float wynik=0;
int i=0;
for (i=0; i<10; i=i+1){
	wynik=wynik+a[i];
	}
wynik=wynik/10;
cout << wynik << endl;
}

void przedzial(int a[10]){
float iloczyn=1;
int licznik=0;
int i=0;
for (i=0; i<10; i=i+1){
	if (((a[i])>1) and (a[i]<5)){
	licznik=licznik+1;
	iloczyn=iloczyn*a[i];
	}
}
cout << "ilosc elementow w przedziale: " << licznik << endl;
cout << "iloczyn elementow w przedziale: " << iloczyn << endl;
}

void minmax(int a[10]){
int i=0;
int min=10;
int max=0;
int suma_minmax;
int ilosc;
for (i=0; i<10; i=i+1){
	if (a[i]>max) max=a[i];
	if (a[i]<min) min=a[i];	
}
suma_minmax=min+max;
//cout << suma_minmax;
for (i=0; i<10; i=i+1){
	if (a[i]<suma_minmax) ilosc=ilosc+1;
	}
cout << "ilosc elementow mniejszych niz suma min i max: " << ilosc;
}

int tab[10];
int i;
main()
{
tab[1]=3;
tab[2]=5;
tab[3]=2;
tab[4]=8;
tab[5]=4;
tab[6]=9;
tab[7]=1;
tab[8]=4;
tab[9]=3;
tab[10]=2;
for (i=0; i<10; i=i+1)
{
	cout << tab[i] << " " ;
	}
cout << " " << endl;
cout << "srednia: ";
srednia(tab);
przedzial(tab);
minmax(tab);
while(!kbhit());
}

