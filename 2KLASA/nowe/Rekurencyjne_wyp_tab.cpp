#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int* tab[5];
int i;

int wczytaj(int a[5]){
int i;
ifstream murzyn("murzyn.txt");
   
if (!murzyn)
    {
        cout << "Nie mozna otworzyc pliku";
        getchar();
        //return 1;
    }

while (!murzyn.eof()){ //eof to koniec tabki
       murzyn >> a[i]; 
       i=i+1;
	}
       
murzyn.close();
   
//    for (int j=0; j<i; j++)
//         cout << tab[j] << endl	
	
}

main(){
wczytaj(tab[5]);

for (int j=0; j<i; j++)
         cout << tab[j] << endl	;
	
while(!kbhit());	
}
