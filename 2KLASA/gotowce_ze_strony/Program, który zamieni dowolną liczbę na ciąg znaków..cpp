#include <iostream>
#include <cstring>
using namespace std;

char FZnak(int d);
string FIntToStr(int n);

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin>>liczba;
    cout << endl;
    
    cout << "Liczba przed zamiana: " << liczba << endl;
    cout << "Liczba po zamianie na string: " << FIntToStr(liczba);
    
    
   
    cin.ignore();
    return 0;
}
//-------------------------------------------------------------------------------
char FZnak(int d)
{
  return char(d+'0'); //musieliœmy do wartoœci cyfry d dodaæ kod ASCII znaku '0'. 
}
//-------------------------------------------------------------------------------
string FIntToStr(int n)
{
  string s = "";
  int d;
  do
  {
    d = n%10;
    s = FZnak(d) + s;
    n = n/10;
  }
  while(n>0);
  
  return s;
}




