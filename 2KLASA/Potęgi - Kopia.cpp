#include <iostream>
using namespace std;

int liczba;



float potega_it(int x){  
int i;  
float wynik;  
wynik=1;
  
for(i=1;i<=5;i++)  
    wynik = wynik * x;  
return wynik;  
}  

int potega(int x, int n=5){
if (n==0)return 1;
	else
return x=x*potega(x,--n);
} 

int main(){
	
cout << "Podaj liczbe" << endl;
cin >> liczba;

cout << "Wyliczone teracyjnie: " << potega_it(liczba) << endl;;
cout << "Wyliczone rekurencyjnie: " << potega(liczba);

return 0;
}
