/*oczytaj z pliku slowa1.txt wyrazy (1 wyraz w wowej linii) i
* do pliku b.txt przepisz trzyliterowe s�owa
* do pliku c.txt przepisz s�owa rozpoczynaj�ce si� na liter� 'a'
* do pliku d.txt przepisz s�owa ko�cze si� na 'z'
* do pliku e.txt przepisz s�owo zakodowane kodem Cezara o kluczu 3
* do pliku f.txt przepisz slowo zakodowane kodem Cezara o kluczu podanym przez uzytkownika
* do pliku g.txt przepisz slowa o nieparzystej licznie znak�w
* do pliku h.txt zapisz odwrotno�ci s��w 
* do pliku i.txt przepisz palindromy (s�owa czytane od przodu i od tylu sa takie same
* 					np s�owo ala, kajak, sedes)
* do pliku j.txt przepisz te s�owa, kt�re sa palindromami cyfrowymi (zad maturalne 
* 					- znajdz tre�� w internecie)
* do pliku k.txt przepisz co drugi wiersz
* do pliku l.txt przepisz s�owa zawieraj�ce liter� 'g'
* 
* odczytaj z pliku slowa2.txt wyrazy (2 wyrazy w kazdej linii) i
* do pliku y.txt przepisz te s�owa, kt�re sa takie same
* do pliku w.txt przepisz te s�owa, kt�re sa angramami (zlozone z tych samych liter-
* 					znajdz w necie algorytm)
* 
* odczytaj z pliku liczby.txt liczby i 
* do pliku l1.txt przepisz liczby parzyste
* do pliku l2.txt przepisz liczby pierwsze
* do pliku l3.txt zapisz sum� cyfr liczby
* 
* STARAJ SI� NAPISA� TE PROGRAMY W JEDNYM PROGRAMIE
* WYWOLUJ�C KOLEJNE FUNKCJE NAPISANE POD FUNKCJ� MAIN
* 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string rot3(string wyraz){
int klucz = 3;
int i;
int numer;
string wyraz2;
for (i=0; i < wyraz.length(); i++){
numer = (int(wyraz[i])+klucz);
if ((numer>90)&&(numer<97)) numer=numer-26;
if (numer>122) numer=numer-26;
	
wyraz2=wyraz2+(char)numer;	

}

for (i=wyraz.length(); i>wyraz.length(); i--){
numer = (int(wyraz[i])-klucz);
if (numer>122) numer=numer-26;

wyraz=wyraz+(char)numer;
}
	
return wyraz2;
	
}

string rot_user(string wyraz, int klucz){
int i;
int numer;
string wyraz2;
for (i=0; i < wyraz.length(); i++){
numer = (int(wyraz[i])+klucz);
if ((numer>90)&&(numer<97)) numer=numer-26;
if (numer>122) numer=numer-26;
	
wyraz2=wyraz2+(char)numer;	

}

for (i=wyraz.length(); i>wyraz.length(); i--){
numer = (int(wyraz[i])-klucz);
if (numer>122) numer=numer-26;

wyraz=wyraz+(char)numer;
}
	
return wyraz2;
	
}


string odwrotnosc(string wyraz){
int i;
string wyraz_odw;
for(i=(wyraz.length()-1); i>=0; i--){
	wyraz_odw[wyraz.length()-i]=wyraz[i];
	}			
return wyraz_odw;

}




string n;
int rot;

using namespace std;

int main() {
cout << "Podaj przesuniecie ROT: " ;
cin >> rot;

fstream in("slowa1.txt", ios_base::in);
fstream outb("out_b.txt", ios_base::out);
fstream outc("out_c.txt", ios_base::out);
fstream outd("out_d.txt", ios_base::out);
fstream outf("out_f.txt", ios_base::out);
fstream outg("out_g.txt", ios_base::out);
fstream outh("out_h.txt", ios_base::out);

//if (outb.good()) cout << "Zapisano";


while(!in.eof())
    {
         in >> n;
         cout << n << endl;
         if (n.size()==3) outb << n<< endl;  //d�ugo�� 3
         if (n.at(0)=='A') outc << n << endl; //zaczynaj� sie na A
         if (n.at(n.size()-1)=='Z') outd << n << endl; //Ko�cz� sie na A
         outf << rot3(n) << endl; //Rot 3
         outg << rot_user(n,rot) << endl; //Rot
         outh << odwrotnosc(n) << endl;  //odwrotnosc
    }


return 0;
}
