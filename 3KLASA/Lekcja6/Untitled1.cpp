#include<string>
#include<iostream>
using namespace std;

string a="ala",b="ala",c="malarz",napis;

int main(){

cout << a << a.length() << endl;
cout << b << b.length() << endl;
cout << c << c.length() << endl;

if ((a.length() > b.length()) && (a.length() > c.length())) cout << "Pierwszy wyraz jest najdluzszy"; 
	else if ((b.length() > a.length()) && (b.length() > c.length())) cout << "Drugi wyraz jest najdluzszy"; 
		else  cout << "Trzeci wyraz jest najdluzszy";
		
cout << endl;
		
if (a==b) cout << "a i b sa takie same";
	else if (a==c) cout << "a i c sa takie same";
		else cout << "b i c sa takie same";
		
cout << endl;		

if (a.find(b)) cout << "b zawiera sie w a" << endl;
if (b.find(a)) cout << "a zawiera sie w b" << endl;
if (c.find(a)) cout << "a zawiera sie w c" << endl;
if (c.find(b)) cout << "b zawiera sie w c" << endl;

napis = a+b+c;

cout << "ciag zlaczony: " << napis;
			
	
return 0;
}
