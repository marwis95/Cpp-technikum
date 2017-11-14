#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int ascii_p_np (string wyraz){
int dlugosc = wyraz.size();
int znak;
int numer;
int i;

for (i=0; i<dlugosc; i++){
znak = wyraz[i];
numer = numer+ znak;	
}

return numer;

}


bool czy_pierwsza(int n)
{
  if(n<2)
    return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹
 
  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}

bool rosnace (string wyraz){
int dlugosc = wyraz.size();
int i;
int znak;
int znak2;
bool wynik;

for (i=0; i<dlugosc; i++){
	znak = wyraz[i];
	znak2 = wyraz[i+1];
	if (znak2>znak) wynik=1; else{
	wynik=0;	
	break;
}

}
return wynik;	
}

string n;
int ilosc, ilosc_ros;

using namespace std;

int main() {


fstream in("NAPIS.txt", ios_base::in);



//if (outb.good()) cout << "Zapisano";


while(!in.eof())
    {
         in >> n;
         if (czy_pierwsza(ascii_p_np(n))!=0){
		 ilosc=ilosc+1;
		}
		if (rosnace(n)==1) ilosc_ros=ilosc_ros+1;
		
         
    }

cout << "ILOSC: " << ilosc << endl;
cout << "ILOSC ROS: " << ilosc_ros;

return 0;
}
