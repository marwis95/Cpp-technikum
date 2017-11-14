#include <fstream> 
#include <iostream> 
#include <string> 
#include <cstdlib>
#include <math.h> 
using namespace std;

int suma(string a){
int i=0, suma=0; 
for(i=0; i<a.size(); i++){ 
if (a[i]=='1') suma=suma+1; 
} 
return suma; 
} 

int bin2dec(string a)
{
    int wynik = 0, x = 1;
    for ( int i = a.length() - 1; i >= 0; --i, x <<= 1 )
        wynik += (a[i] - '0') * x;

    return wynik;
}


string n; 
int m;


int main(){ 
fstream input("liczby.txt", ios_base::in); 
fstream output("zad1.txt", ios_base::out);



while(!input.eof()){ 
input >> n; 



if ((n[n.size()-1]=='0')&&(suma(n)==3)) { 
input >> m;
output << n << endl;
cout << n << "  " ;
cout << bin2dec(n) << endl; 
}
}
return 0; 
}
