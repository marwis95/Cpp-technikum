#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int a=4;
  float b=8.5;
  
  ofstream wyj("plik.txt"); // (1) utworzenie obiektu wyj
  wyj << a << endl << b; // (2) zapis do pliku
  wyj.close(); // zamkni cie pliku
  
  wyj.open("plik.txt"); // ponowne otwarcie pliku
  wyj.close(); // ponowne zamkniecie pliku
 
return 0;
}
