#include<iostream>
#include<cstdlib>
using namespace std;

class paczka{
private:
int nr;
int cena;
int waga;
public:
void wypisz(void){
cout<<"Nr: "<<nr<<endl;
cout<<"Cena: "<<cena<<endl;
cout<<"Waga: "<<waga<<endl;
}
float jednostkowa(){
return ((float)cena/waga*1.0);
}
float euro(float e){
return cena*e;
}
void lzejsza(paczka a){
if (waga==a.waga)
cout<<"Waga taka sama"<<endl;
else
if (waga<a.waga)
cout<<"Lzejsza jest paczka o nr: "<<nr<<endl;
else
cout<<"Lzejsza jest paczka o nr: "<<a.nr<<endl;
}


paczka(){
nr=1;
cena=1;
waga=1;
}
paczka (int a,int b, int c){
nr=a;
cena=b;
waga=c;
}
};






int main(void){
paczka pierwsza;
paczka druga(2,2,2);
int a,b,c;
cin>>a>>b>>c;
paczka trzecia(a,b,c);
pierwsza.wypisz();
cout<<endl;
druga.wypisz();
cout<<endl;
trzecia.wypisz();
cout<<"Cena jednostkowa: "<<trzecia.jednostkowa();
cout<<endl;
cout<<"Cena w euro: "<<trzecia.euro(4.17);
cout<<endl;
trzecia.lzejsza(druga);
cout<<endl;


system("PAUSE");
return 0;
}
