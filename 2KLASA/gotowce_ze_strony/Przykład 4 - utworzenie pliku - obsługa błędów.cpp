#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
  ofstream wyniki("out.txt");

  if (!wyniki) // poczatek obslugi bledów
  {
     cout << "Pliku nie mozna utworzyc";
     getchar(); // umozliwia ci przeczytanie komunikatu bledu
     return 1;
   } // koniec obslugi bledów
   
   
wyniki.close();
return 0;
}
