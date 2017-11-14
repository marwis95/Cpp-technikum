#include <iostream>

using namespace std;

int main()
{
    int dec;
    char bin[33]={0};
    cout<<"Podaj liczbe dziesiatna: ";
    cin>>dec;
    itoa(dec, bin,2);
    cout<<"Odpowiednik binarny: "<<bin<<endl;
    cin.sync();
    getchar();
    return 0;   
	
}
