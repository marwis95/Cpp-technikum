#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
  int a, b;
  
  ifstream wejscie("slowa.txt"); //powiazanie strumienia z plikiem
  
  if (!wejscie) // badanie poprawnosci otwarcia
  {
     cout << "Nie mozna otworzyc pliku";
     getchar(); //umozliwia przeczytanie komunikatu bledu
     return 1;
  }
  
  wejscie >> a >> b; //odczyt z pliku
  wejscie.close();
  
  cout << "Pole prostokata wynosi: " << a*b;
  
  getchar();
  return 0;
}
