#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int tab[5];
    int i;
    ifstream liczby("liczby.txt");
   
    if (!liczby)
    {
        cout << "Nie mozna otworzyc pliku";
        getchar();
        return 1;
    }

    while (!liczby.eof()) //eof to koniec tabki
       liczby >> tab[i++]; 
       
    liczby.close();
   
    for (int j=0; j<i; j++)
         cout << tab[j] << endl;

    getchar();
    return 0;
}
