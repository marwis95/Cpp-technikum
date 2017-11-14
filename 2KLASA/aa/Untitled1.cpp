#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

char tab[1000]; 

string str;

int main()
{
  int i;
  
  ifstream wejscie("slowa.txt"); //powiazanie strumienia z plikiem
  
  if (!wejscie) // badanie poprawnosci otwarcia
  {
     cout << "Nie mozna otworzyc pliku";
     getchar(); //umozliwia przeczytanie komunikatu bledu
     return 1;
  }
  
  while (!wejscie.eof()){
	wejscie.ignore(255,'/n');
cout << wejscie.getline(tab,1000);

		
  }
  

  
  getchar();
  return 0;
}
