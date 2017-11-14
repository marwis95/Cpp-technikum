#include <iostream>
#include <string>

using namespace std;

int i=0,k,j;
string s,w;

int main(){
cout << "Podaj slowo: " ;
cin >> s ;	
cout << "Podaj klucz maxymalnie" << s.length()-1 << " znakow: ";
cin >> k;



if(k>=s.length()) cout << "Klucz jest za dlugi";
	else{
while(i<k){
j=i;

	while(j<s.length()){
	w=w+s[j];
	j=j+k;
	}
	
i=i+1;	

}

}


cout << w;
	
return 0;
}
