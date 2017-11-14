#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
double funkcja(double x);
double pole_obszaru(int n, double a, double b);
int main()
{
 int ilosc;
 double a,b;
 cout<<"Program oblicza pole obszaru ograniczonego";
 cout<<"wykresem funkcji w przedziale<a;b>"<<endl;
 cout<<"Podaj wartosc lewego kranca przedzialu: ";
 cin>>a;
 cout<<"Podaj wartosc prawego kranca przedzia³u: ";
 cin>>b;
 cout<<"Na ile przedzialow podzielic wyjsciowy przedzial";
 cin>>ilosc;
 cout<<"wartosc pola: "<<pole_obszaru(ilosc,a,b);
 cin.ignore();
 getchar();
 return 0;   
    
}
double funkcja(double x)
{
 return x*x;      
}
double pole_obszaru(int n, double a, double b)
{
 double P=0;
 double d=(b-a)/n;
 double x;
 
        for(int k=0; k<n; k++)
        {
                x=a+(d*k)+(d/2);
                P=P+d*fabs(funkcja(x));
        }      
        return P;
}

