#include <iostream>
#include <string>

using namespace std;

string a,b;
int i, dlugosc, j, ilosc;

int main(){
cout << "Podaj pierwszy wyraz: " ;
cin >> a;
cout << "Podaj drugi wyraz: " ;
cin >> b;

if(a.size() != b.size()) cout << "Nie anagram";
	else{
	dlugosc = a.size();
		
	for(i=0; i<dlugosc; i++){
		for(j=0; j<dlugosc; j++){	
		ilosc++;
		}
		}
	
	if(ilosc = dlugosc) cout << "Anagram"; else cout << "Nie anagram";
	
	}
	
return 0;	
}
