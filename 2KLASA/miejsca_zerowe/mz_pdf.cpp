#include <iostream>
#include <cstdio>
using namespace std;

double f(double x){
	return 2*x*x-4;
}

double mz(double a, double b, double dokladnosc){
double d=(a+b)/2; // dzielenie przedzialu na pó³
	
	while ((b-a>dokladnosc) && (f(a)!=0) && (f(b)!=0)){ // je¿eli funkcja nie wynosi zero
		d=(a+b)/2; // dzielenie w pêtli
		if (f(a)*f(d)<0) d=b; // je¿eli funkcja od a i obecnego mniejszy od zero to obecny=koncowy
		else a=d ; 
	}
if (f(a)==0) return a; // je¿eli na pocz¹tku to a
if (f(b)==0) return b; // je¿eli na koñcu to b
return d; // zwróæ obecny który zawiera mz	
}

int main(){
double lewy, prawy, dokladnosc;
do{
	cout << "Podaj lewy kraniec ";
	cin >> lewy;
	cout << "Podaj prawy kraniec ";
	cin >> prawy;
	}


while ((f(lewy)*f(prawy)>0) || (prawy<=lewy));
cout << "Podaj dokladnosc ";
cin >> dokladnosc;
cout << "Wartosc mz wynosi: ";
cout << mz(lewy,prawy,dokladnosc) << endl;
cin.ignore();
getchar();
return 0;

}
