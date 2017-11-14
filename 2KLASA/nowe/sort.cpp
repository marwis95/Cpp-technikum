#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void zamien(int &a, int &b){
int temp=a;
a=b;
b=temp
}

void wybor(int tab[], int n){
int i,j,k,temp;
for (i=0; i<n; i=i+1){
k=i;
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void zamien(int &a, int &b)
{
     int temp=a;
     a=b;
     b=temp;
}


void sortowanie_przez_wybor(int tab[], int n)
{
     int i, j, k, temp;
     for (i=0; i<n; i++)
     {
         k=i;
         for (j=i+1; j<n; j++)
         if (tab[j]<tab[k])
         k=j;
         zamien(tab[k], tab[i]);
     }
}

void bubble(int tab[], int n){
	int temp;
	for (int j=n-1; j>0; j=j-1){
	for (int i=0; i<j; i=i+1)
	if (tab[i]>tab[i+1]) zamien(tab[i],tab[i+1]);
	}
}

void wypisz (int tab[], int n)
{
     for (int i=0; i<n; i++)
     cout << setw(3) << tab[i];
     cout << endl;
}

void insertionsort(int tab[], int ile_liczb)
{
int i,j,v;
for (i=1;i<ile_liczb;i++)
{
j=i;
v=tab[i];
while ((tab[j-1]>v)&&(j>0))
{
tab[j]=tab[j-1];
j--;
}
tab[j]=v;
}
}

main()
{
int tablica[20];
int i;
srand (time(NULL));
for (i=0; i<20; i++)
tablica[i]=rand()%100;
cout << "tablica od 0 do 99:" << endl;
wypisz(tablica, 20);
cout << endl;
cout << "Posortowana tablica przez wybor: " << endl;
sortowanie_przez_wybor(tablica,20);
wypisz(tablica,20);
cout << endl;
cout << "Posortowana tablica bubble: " << endl;
bubble(tablica,20);
wypisz(tablica,20);
cout << endl;
cout << "Posortowana tablica wstawianie: " << endl;
insertionsort(tablica,20);
wypisz(tablica,20);
getchar();
return 0;
}







for (j=i+1; j<n; j=j+1)
if (tab[j]<tab[k]) k=j
}
}

void wypisz(int tab[], int n){
for (int i=0; i<n; i=i+1)
cout << setw(3) << tab[i];
cout << endl;
}

main()
{
int tablica[20];
int i;
srand(time(NULL));
for (i=0; i<20; i=i+1)
tablica[i]=rand()%100;
cout << "tablica od 0 do 99:" << endl;
wypisz(tablica, 20);
cout << "Posortowana tablica:" << endl;
wybor(tablica,20);
wypisz(tablica,20);
 
while(!kbhit());
}

