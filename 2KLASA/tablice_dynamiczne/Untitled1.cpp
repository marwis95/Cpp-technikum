#include <iostream>
#include <cstdio>
#include <time.h>
#include <cstdlib>
using namespace std;

int n, i, p, np, licz_p, licz_n;

int main(){
cout << "Ile elementow ma miec tablica? " << endl;
cin >> n;	
int *tab = new int[n]; 	

srand(time(NULL));
for (i=0; i<n; i=i+1){
tab[i]= rand() % (10-0)+0;
cout << tab[i] << " ";
if (tab[i]%2==0) p=p+1;
	else np=np+1;
}	

cout << " " << endl;

int *ptab = new int[p]; 
int *ntab = new int[np]; 

srand(time(NULL));
for (i=0; i<n; i=i+1){
if (tab[i]%2==0) {
	ptab[licz_p]=tab[i];
	licz_p=licz_p+1;
	}
		else{
			ntab[licz_n]=tab[i];
			licz_n=licz_n+1;
			}
}

cout << "Tablica z parzystymi" << endl;
for (i=0; i<p; i=i+1){
	cout << ptab[i] << " " ;	
}

cout << " " << endl;

cout << "Tablica z nieparzystymi" << endl;
for (i=0; i<np; i=i+1){
	cout << ntab[i] << " " ;	
}
//cout << np << " " << p;	

delete tab;
delete ptab;
delete ntab;
	
return 0;
}
