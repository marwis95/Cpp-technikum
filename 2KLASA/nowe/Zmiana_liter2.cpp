#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

string zamien(string x){
int i;
    for (i=0; i<x.length(); i++)
    if (x[i]>96 && x[i]<123)
    x[i]=x[i]-32;
	return x;	
}

string zdanie;
int i;
    
main()
{
    string zdanie;
    int i;
    cout << "podaj zdanie" << endl;
    cin >> zdanie;


    cout << zamien(zdanie) << endl;
    
    
while(!kbhit());
}
