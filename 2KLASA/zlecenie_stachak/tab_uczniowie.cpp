#include <iostream>
#include <cstdio>
using namespace std;

int i;

struct uczen{
	char imie[10];
	char nazwisko[15];
	float srednia_ocen;
};

int main(){
	uczen tab[3];
	uczen *wsk;
	wsk = tab;
		
for (i=0; i<3; i++){
	cout <<"Podaj imie ucznia: ";
	cin >> wsk->imie;
	cout << "Podaj nazwisko ucznia: ";
	cin >> wsk->nazwisko;
	cout << "Podaj srednia ocen ucznia: ";
	cin >> wsk->srednia_ocen;
	wsk = wsk++;
}	

wsk = tab;
cout << "Najlepsi uczniowie w klasie: " << endl;

for (i=0; i<3; i++){
	cout << wsk->imie << " ";
	cout << wsk->nazwisko << " ";
	cout << wsk->srednia_ocen << endl;
	wsk = wsk++;
}

cin.ignore();
getchar();
return 0;	
}
