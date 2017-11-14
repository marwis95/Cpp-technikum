#include<conio.h>
#include<stdio.h>
int a,b,c,wynik;
main()
{
printf("Wprowadz liczbe ");
scanf("%i", &a);
printf("Wprowadz liczbe ");
scanf("%i", &b);
printf("Wprowadz liczbe ");
scanf("%i", &c);

if ((a>c)&&(b>a))
	{
	wynik=a*b;
	printf("Wynik: %i", wynik);
	}
	
if ((b<c)||(b<a))
	{
	wynik=c/a;
	printf("Wynik: %i", wynik);
	}
	
if (((c>a)&&(c!=5))||((b>c)&&(a!=0)))
	{
	wynik=a+b+c;
	printf("Wynik: %i", wynik);
	}	

while(!kbhit());
}

