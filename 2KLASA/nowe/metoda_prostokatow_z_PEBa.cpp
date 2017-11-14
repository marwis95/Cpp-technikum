#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
		
double funkcja(double x)	//funkcja dla kt�rej liczymy calk�, tu x^2
{
  return x*x;
}

double pole_obszaru(int n, double a, double b)
{
  double P = 0;			//zmienna kt�ra sumuje pola prostok�t�w
  double d = (b-a)/n;		//dlugo�� przedzia��w na jakie dzielimy <a;b>
  double x;			//punkty po�rednie przedzial�w
  for (int k=0; k<n; k++)
  {
    x = a+(d*k)+(d/2);
    P = P+d*fabs(funkcja(x));	//suma p�l prostok�t�w
  }
  return P;			//suma p�l wszystkich prostok�t�w
}

int main()
{
  int ilosc;
  double a, b;
  cout << "Program oblicza pole obszaru ograniczonego";
  cout << "wykresem funkcji w przedziale <a; b>" << endl;
  cout << "podaj wartosc lewego kranca przedzialu:  a ";
  cin >> a;
  cout << "podaj wartosc prawego kranca przedzialu:  b ";
  cin >> b;
  cout << "Na ile przedzialow podzielic wyjsciowy przedzial?: ";
  cin >> ilosc;
  cout << "wartosc pola : " << pole_obszaru(ilosc,a,b);
  cin.ignore();
  getchar();
  return 0;
}
