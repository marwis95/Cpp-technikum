#include <iostream>
#include <conio.h>
using namespace std;

int zamien (int *x, int *y){
int temp;
temp = *x;
*x=*y;
*y=temp;
cout << *x << " " << *y;
}

int main(){
int a,b;
int *wsk1, *wsk2;
cout << "Podaj pierwsza liczbe" << endl;
cin >> a;
wsk1=&a;
cout << "Podaj druga liczbe" << endl;
cin >> b;
wsk2=&b;
//cout << zamien(wsk1,wsk2);
zamien(wsk1,wsk2);
	
while(!kbhit());
return 0;
}
