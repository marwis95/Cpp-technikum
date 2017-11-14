#include<conio.h>
#include<stdio.h>
#include<cmath>
int a,b,ilosc;
double funkcja(double x){
return x*x;
}

double pole(int n, double a, double b){
double p=0;
double d=(b-a)/n; //podstawa prostok¹ta
double x;

for (int k=0; k<n; k=k+1){
	x=a+(d*k)+(d/2);
	p=p+d*fabs(funkcja(x)); //stare p+(d³ugoœæ*bok)
	}
return p;
}

main()
{
printf("Wprowadz a: ");
scanf("%i", &a);
printf("Wprowadz b: ");
scanf("%i", &b);
printf("Na ile prostakatow podzielic przedzial ");
scanf("%i", &ilosc);

printf("%i", pole(ilosc,a,b));
while(!kbhit());
}

