#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
double a,b;
long t=0,r,ilosc; // ilosc pkt w kole, 
int repeat;

repeat=1;
do{
system("cls"); 	
srand(time(NULL));
cout << "Wprowadz ilosc punktow " << endl;
cin >> ilosc;
for (r=0; r<ilosc; r=r+1){
a=(double)rand()/(RAND_MAX);
b=(double)rand()/(RAND_MAX);
if (a*a+b*b<=1)
	t=t+1;
}
cout << "Liczba pi ma wartosc " << (double)(4*t)/r << endl;
	cout << " " << endl;
	cout << "Czy chcesz kontynuowac (Nie-0 Tak-1) " << endl;
	cin >> repeat;
a=0;
b=0;
t=0;
r=0;
ilosc=0;
}while(repeat>0);

//cin.ignore();
//return 0;
}

