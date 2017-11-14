#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int i,j;


void wyp (int tab[5][6]){
srand(time(NULL));
for (i=0; i<5; i=i+1)
{
for (j=0; j<6; j=j+1)
{
tab[i][j]= (float) (rand() % 2);
}
}
}

void wypisz (int tab[5][6]){
for (i=0; i<5; i=i+1)
{
cout << " " << endl;
for (j=0; j<6; j=j+1)
{
cout << tab[i][j] << " ";
}
}
}

void kol (int tab[5][6]){
int k;
int licznik;
int ile_zer=0;
for (j=0; j<6; j=j+1)
{
licznik=0;
for (i=0; i<5; i=i+1)
{
if (tab[i][j]==0) licznik++;
}


	if (licznik>ile_zer){
	ile_zer=licznik;
	k=j;
	}	

}
printf("\n");
printf("%i", k+1);	
}

int wypisz_kol(int tab[5][6], int k){
return k;
void kol(int tab[5][6],int k);
}



main(){
int tab[5][6];
wyp(tab);
wypisz(tab);
kol(tab);
//wypisz_kol(tab,3);
//cout << kol(tab,3);

while(!kbhit());
}
