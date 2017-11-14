#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int *wsk;
int a;

a=1;
wsk=&a;	

cout << a << endl << sizeof(a) << endl << &a << endl << wsk << endl;	

wsk=wsk+1;
	
cout << wsk;
while(!kbhit());
return 0;
}
