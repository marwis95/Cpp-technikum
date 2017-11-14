#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int *wsk;
int *wsk2;
int tab1[5];


tab1[0]=5;
tab1[1]=2;
tab1[2]=8;
tab1[3]=1;
tab1[4]=7;
tab1[5]=3;


wsk=tab1;	

wsk=wsk+1;


cout << *wsk << endl;

wsk2=new int;

cout << wsk2;
delete wsk2;
while(!kbhit());
return 0;
}
