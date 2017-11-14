#include <iostream>
#include <cstring>
using namespace std;

bool FLiczba_Palindrom(int n);
int FOdwroc(int n);

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin>>liczba;
    cout << endl;
    
    if(FLiczba_Palindrom(liczba) == true)
       cout<<"\n Wczytana liczba jest palindromem";
    else
       cout<<"\n Wczytana liczba nie jest palindromem";
    
    
    
    cin.ignore();
    return 0;
}
//-------------------------------------------------------------------------------
int FOdwroc(int n)
{
  int wynik = 0;
  while(n>0)
  {
    wynik = 10*wynik + n%10;
    n = n/10;
  }
  return wynik;
}
//------------------------------------------------------------------------------
bool FLiczba_Palindrom(int n)
{
  return n==FOdwroc(n);
}



