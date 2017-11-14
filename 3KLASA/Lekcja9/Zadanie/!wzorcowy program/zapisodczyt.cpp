//zapis i odczyt prosta wersja

#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

int main()
{
    
    // uwaga - dane w pliku moga byc zapisane dowolnie - odzielone dowolna iloscia spacji i enterów
    
    
    
    ifstream wejscie("slowa.txt");
    ofstream wyjscie("wynik.txt");
    
    //mozna bez zabezpieczenia, ale zrobmy jak trzeba ;)           //
    if(!wejscie)                                                   // ten 
        {                                                          // fragment
             cout << "pliku nie mozna otworzyc" << endl;           // nie
             //system("PAUSE");                                      // jest
             return 1;                                             // niezbedny
        }                                                          //  
    
     
     string n;                                                     
    
    while(!wejscie.eof())
    {
         wejscie >> n;
         cout << n << endl;
         wyjscie << n<< endl;
    }
    wejscie.close();
    wyjscie.close();
    
    //system("PAUSE");
    return 0;
}
