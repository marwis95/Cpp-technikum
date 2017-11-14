#include <iostream>
#include <string>

using namespace std;

int i;
string s,w;

int main(){
cout << "Podaj slowo: " ;
cin >> s ;

w = "";


for(i=0; i < s.length(); i++)
    if(i%2) w=w+s[i] + s[i-1];
  		if(w.length()< s.length()) w=w+s[i-1];
  cout << w << endl;
  return 0;
}


