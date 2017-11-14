#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<time.h>
#include <cstdlib>
using namespace std;
int a,b,ilosc;

double funkcja(double x){
return sin(x);
}

double pole_obszaru_nadm(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=7; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugoœæ jednego odcinka
  double x=a;			//punkty poœrednie przedzialów
  for (int k=0; k<n; k++)
  {
	if (funkcja(x+d)>funkcja(x)){

    P = P+d*fabs(funkcja(x+d));
    x=x+d;
	}	//sumowanie
  }
  return P;			//suma pól wszystkich prostok¹tów
}

main()
{
double a=0;
double b=7;
long t=0,r,ilosc; 
srand(time(NULL));
ilosc = 1000000;
for (r=0; r<ilosc; r=r+1){
a=(double)rand()/(RAND_MAX);
b=(double)rand()/(RAND_MAX);
if (b<a*a)
	t=t+1;
}


cout << "Pole dolnego wykresu: " << pole_obszaru_nadm() << endl;
cout << "Pole obszaru wynosi " << (double)(t*4)/r << endl;
while(!kbhit());
}


