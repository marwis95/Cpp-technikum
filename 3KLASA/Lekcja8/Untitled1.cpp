#include <iostream>
#include <string>

using namespace std;

string wyraz, wyraz2;
int klucz, i, numer;

int main(){
cout << "Wprowadz wyraz do zakodowania: " ;
cin >> wyraz;
cout << "Wprowadz klucz: " ;
cin >> klucz;
klucz = klucz % 26;




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
	
cout << wyraz2 << endl;
cout << wyraz;

return 0;
}
