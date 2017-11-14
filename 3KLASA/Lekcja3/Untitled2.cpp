#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class ulamek{
int licznik;
int mianownik;
public:
	void wprowadz(int l, int m);
	int skroc(int a, int b);
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

int ulamek::skroc(int a,int b)
{
a=licznik;
b=mianownik;
int x;

while(b){
x = b;
b = a % b;
a = x;
}
return a;
}


int main(){
ulamek ul1;
ul1.wprowadz(12,16);
cout << "Ulamek: ";
ul1.wypisz();
cout << endl;
cout << "NWD: " << ul1.skroc(12,16);

	
return 0;
}
