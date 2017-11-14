#include <iostream>
using namespace std;
//Deklaracja Funkcji
void odwroc ();
//Program G³ówny
main()
{
      odwroc();
      
      system("pause");      
}
void odwroc()
{
char a;
 cout<<"Podaj a: ";
 cin>>a;    
  if(a!='0') odwroc();  
  cout<<a;
}
