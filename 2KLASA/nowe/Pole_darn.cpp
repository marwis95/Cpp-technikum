#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
		
double funkcja(double x)	//funkcja g�ry
{
  return x*x-36;
}



double pole_obszaru(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=10; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugo�� jednego odcinka
  double x=a;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
    P = P+(fabs(funkcja(x))+fabs(funkcja(x+d)))/2*d;
	x=x+d;	//sumowanie
  }																																																																																												
  return P;			//suma p�l wszystkich prostok�t�w
}


double pole_obszaru_nied(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=10; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugo�� jednego odcinka
  double x=a;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
    P = P+d*fabs(funkcja(x));
	x=x+d;	//sumowanie
  }
  return P;			//suma p�l wszystkich prostok�t�w
}


double pole_obszaru_nadm(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=10; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugo�� jednego odcinka
  double x=a;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
	if (funkcja(x+d)>funkcja(x)){

    P = P+d*fabs(funkcja(x+d));
    x=x+d;
	}	//sumowanie
  }
  return P;			//suma p�l wszystkich prostok�t�w
}


int main()
{
  int ilosc;
  double a, b;
  
  cout << "Metoda trapezow: " << pole_obszaru() << endl;
  cout << "Metoda kwadratow z nadmiarem: " << pole_obszaru_nadm() << endl;
  cout << "Metoda kwadratow z niedomiarem: " << pole_obszaru_nied() << endl;
  cin.ignore();
  getchar();
  return 0;
}
