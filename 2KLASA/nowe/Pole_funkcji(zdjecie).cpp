#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
		
double funkcja(double x)	//funkcja g�ry
{
  return 1+(x*x)/100-x/200;
}

double funkcja_dol(double x)	//funkcja g�ry
{
  return (x*x)/50;
}

double pole_obszaru(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=10; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugo�� jednego odcinka
  double x;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
    x = a+(d*k)+(d/2);
    P = P+d*fabs(funkcja(x));	//sumowanie
  }
  return P;			//suma p�l wszystkich prostok�t�w
}


double pole_obszaru_dol(){
  int n=1000; //dokladnosc
  double a=0; //poczatek
  double b=10; //koniec
  
  double P = 0;			//pola
  double d = (b-a)/n;		//dlugo�� jednego odcinka
  double x;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
    x = a+(d*k)+(d/2);
    P = P+d*fabs(funkcja_dol(x));	//sumowanie
  }
  return P;			//suma p�l wszystkich prostok�t�w
}

int main()
{
  int ilosc;
  double a, b;
  cout << "Pole gornej czesci wynosi: " << pole_obszaru()<<endl;
  cout << "Pole dolnej czesci wynosi: " << pole_obszaru_dol()<<endl;
  cout << "Laczne pole figury wynosi: " << pole_obszaru()+pole_obszaru_dol();
  cin.ignore();
  getchar();
  return 0;
}
