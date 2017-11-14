#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,c,d,e;
double f(double x);
double pole_obszaru(float a, float b, int n);
int main()
{
 int ilosc;
 double a,b;
 cout<<"Program oblicza pole obszaru ograniczonego";
 cout<<"wykresem funkcji w przedziale<a;b>"<<endl;
 cout<<"Podaj a: ";
 cin>>a;
 cout<<"Podaj b: ";
 cin>>b;
 cout<<"Podaj n";
 cin>>n;
 cout<<"wartosc pola: "<<pole_obszaru(a,b,n);
 cin.ignore();
 getchar();
 return 0;   
    
}

double f(double x)
{
 return fabs(c*x*x+d*x+e);       
}
double pole_obszaru(float a, float b, int n)
{
float pole;
float s=0;
float h=(b-a)/n;
float x;
for (int i=0; i<n-1; i=i+1){
	x=a+h*1;
	s=s+fabs(f(x));
	}
pole=0.5*h*(fabs(f(a))+fabs(f(b))+2*s);
return pole;
}

