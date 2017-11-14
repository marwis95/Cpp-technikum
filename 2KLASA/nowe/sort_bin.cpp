#include <iostream>
#include <cstdio>
int i;
using namespace std;
int binarne(int poczatek, int koniec, int tab[], int szukany)
{
if (poczatek<=koniec)
{
int srodek =(poczatek+koniec)/2;
if (tab[srodek]==szukany)
return srodek; // element znaleziony
if (tab[srodek]>szukany)
return binarne(poczatek,srodek,tab,szukany);
else
return binarne(srodek+1, koniec , tab, szukany);
}
return -1;
}
int main()
{
// element nie wystepuje w cablicy
int tab[6] = {1,2,3,4,5,6};
int szuk;
for (i=0; i<6; i=i+1)
{
printf("%i ", tab[i]);
}
printf("\n");
cout << "Jakiego elementu szukasz? ";
cin >> szuk;
if (binarne(0,5,tab,szuk)==-1)
cout << "Elementu nie ma w tablicy?";
else
cout << "Element odnaleziono na pozycji " << binarne(0,5,tab,szuk)+1;
cin.ignore( );
getchar();
return 0;
}
