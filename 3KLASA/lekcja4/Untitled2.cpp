#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

class punkt {
double x,y;

public:
	
	punkt(){  // do 0 0 
	x=0;
	y=0;	
	}
	
	punkt(double x, double y); // do 0 10
	
	void wypisz(){
	cout << x << " " << y << endl ;
	}
	
	double odleglosc(punkt p){
	return sqrt (((p.x-x)*(p.x-x)) + ((p.y-y)*(p.y-y)));
	}	
	
};	
	
punkt::punkt(double x, double y){
this->x=x;
this->y=y;	

}

int main(){
punkt a, b(0,10);
a.wypisz();
b.wypisz();
cout << "|AB| = " << a.odleglosc(b);

	
return 0;
}
