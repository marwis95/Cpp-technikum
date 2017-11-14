#include<string>
#include<iostream>
using namespace std;
string a="wodyzaldlazydow",b;
int i,n;

int main(){

n=a.length();

for (i=n-1;i>=0;i--){
b = b + a[i];
//cout << b[i];
}



if (a==b) cout << "Wyraz " << a <<" jest palindromem";
	else cout <<"Wyraz " << b <<" nie jest palindromem";

return 0;
}
