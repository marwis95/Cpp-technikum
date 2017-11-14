#include <iostream>
#include <cstring>
using namespace std;

bool FPalindrom(string s);

int main()
{
    string slowo;
    cout << "Podaj ciag znakow: ";
    getline(cin,slowo);
    cout << endl;
    
    if(FPalindrom(slowo) == true)
       cout<<"\n Wczytany ciag jest palindromem";
    else
       cout<<"\n Wczytany ciag nie jest palindromem";
    
    
    
    cin.ignore();
    return 0;
}
//-------------------------------------------------------------------------------
bool FPalindrom(string s)
{
  for(int i=0, j=s.size()-1; i<j; i++, j--)
    if(s[i]!=s[j]) return false;
    
  return true;
}



