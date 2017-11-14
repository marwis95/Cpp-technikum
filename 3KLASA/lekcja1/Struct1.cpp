#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int repeat;

struct osoba{
char imie[15];
char nazwisko[15];
char klasa[5];
};



int main(){
int wybor;
osoba uczen;
system("cls"); 
cout << "Menu" << endl;
cout << "1.Wprowadz dane" << endl;
cout << "2.Wypisz rekord" << endl;
cout << "3.Wypisz wszystkie rekordy" << endl;
cout << "4.Exit" << endl;
cin >> wybor;



switch(wybor){


case 1:{


cout << "Imie: ";
cin >> uczen.imie;
cout << "Nazwisko: ";
cin >> uczen.nazwisko;
cout << "Klasa: ";
cin >> uczen.klasa;


}


case 2:{
cout << uczen.imie << " " << uczen.nazwisko << " " << uczen.klasa;
	break;
}


case 3:{
cout <<"3";
	break;
}


case 4:{
cout <<"4";
	break;
}

}






//repeat=1;
//do{
//	menu();
//	cout << " " << endl;
//	cout << "Czy chcesz kontynuowac (Nie-0 Tak-1)";
//	cin >> repeat;
//}while(repeat>0);

while(!kbhit());



}  
