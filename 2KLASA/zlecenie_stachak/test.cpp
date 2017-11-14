#include<iostream>
#include<fstream>

using namespace std;

void FOtworzPlik(ifstream &otworz);
void FUtworzPlik(ofstream &utworz);

int main()
{
 float a;

 cout<<"\n Otwieram plik z dysku: ";
 ifstream odczytaj;
 FOtworzPlik(odczytaj);

 cout<<"\n Tworze plik na dysku: ";
 ofstream zapisz;
 FUtworzPlik(zapisz);

 while(!odczytaj.eof())
 {
   odczytaj >> a;
   if(odczytaj)                // jeœli strumieñ wejœciowy nie jest pusty
      zapisz << a <<endl;
 }

 zapisz.close();
 odczytaj.close();

 cin.ignore();
 getchar();
 return 0;
}
//--------------------------------------------
void FOtworzPlik(ifstream &otworz)
{
 char nazwa[20];

 cout<<"\n Podaj nazwe pliku: ";
 cin>>nazwa;

 otworz.open(nazwa);

 if(!otworz)
 {
   cout<<"\n Nie moge otworzyc pliku!";
   cin.ignore();
   getchar();
   
 }
}

//--------------------------------------------
void FUtworzPlik(ofstream &utworz)
{
 char nazwa[20];

 cout<<"\n Podaj nazwe pliku: ";
 cin>>nazwa;

 utworz.open(nazwa);

 if(!utworz)
 {
   cout<<"\n Nie moge utworzyc pliku!";
   cin.ignore();
   getchar();
   
 }
}




