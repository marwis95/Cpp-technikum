#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char nazwa[50]; // tablica znaków z ograniczeniem do 50 znaków
  cout << "Podaj nazwe pliku jaki chcesz utworzyc ";
  cin >> nazwa; // pobranie nazwy dla tworzonego pliku
  
  ofstream wyniki(nazwa); //utworzenie pliku
  wyniki << 's'; // do pliku wpiszemy liter s
  wyniki.close();
  
return 0;
}
