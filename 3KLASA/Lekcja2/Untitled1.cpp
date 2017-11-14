#include <iostream>
#include <math.h>
#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

struct trojkat{
double a,b,c;
};

float heron(float a, float b, float c){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
} 

void wczytaj(trojkat &tr){
do{
	system("cls");
	cout << "Podaj A: " << endl;
	cin >> tr.a;
	cout << "Podaj B: " << endl;
	cin >> tr.b;
	cout << "Podaj C: " << endl;
	cin >> tr.c;	
	}while ((tr.a<=0)||(tr.b<=0)||(tr.c<=0)||(tr.a+tr.b<=tr.c)||(tr.a+tr.c<=tr.b)||(tr.b+tr.c<=tr.a));
}


bool test(trojkat a, trojkat b, trojkat c){
if ((trrr.a*trrr.a)+(trrr.b*trrr.b)==(trrr.c*trrr.c)) return true;
	else return false;
}

trojkat trrr;

int main(){
wczytaj(trrr);

cout << "Pole trojkata wynosi: " <<  heron(trrr.a,trrr.b,trrr.c);
cout << test(trrr.a,trrr.b,trrr.c);
}

using namespace std;

struct punkt{
double x,y;
};

void wczytaj(punkt &t){
cout << "Podaj X: " << endl;
cin >> t.x;
cout << "Podaj Y: " << endl;
cin >> t.y;
}

double odleglosc(punkt a, punkt b){
return sqrt(((b.x-a.x)*(b.x-a.x)) + ((b.y-a.y)*(b.y-a.y)));
}

punkt a,b;


int main(){
cout << "Wprowadz wspolrzedna A " << endl;
wczytaj(a);
cout << "Wprowadz wspolrzedna B: " << endl;
wczytaj(b);	

//cout << a.x << " " << a.y << " " << b.x << " " << b.y << " " ;

cout << "Odleglosc pkt A (" << a.x << ", " << b.x << ") od pkt B (" << b.x << ", " <<  b.y << ") wynosi " ;

cout << odleglosc (a,b);
	
	
return 0;
}
