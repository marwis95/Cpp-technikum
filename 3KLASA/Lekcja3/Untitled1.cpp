#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int a,b;

class ulamek{
int licznik;
int mianownik;
public:
	void wprowadz(int l, int m);
	void wypisz(){
	cout << licznik << "/" << mianownik;}

};



void ulamek::wprowadz(int l, int m){
licznik = l;
if(m!=0){
	mianownik = m;
	}else{
		cout << "Mianownik nie moze byc zero";
		cout << endl;
		exit(1);
		system("pause");
		}
}

int main(){

ulamek ul1, ul2, ul3;
ul1.wprowadz(3,4);
ul2.wprowadz(7,8);
cout << "Licznk: " ;
cin >> a;
cout << "Mianownik: ";
cin >> b;
ul3.wprowadz(a,b);
cout << "Piwrwszy ulamek: ";
ul1.wypisz();
cout << endl;
cout << "Drugi ulamek: ";
ul2.wypisz();
cout << endl;
cout << "Trzeci ulamek: ";
ul3.wypisz();
	
return 0;
}
