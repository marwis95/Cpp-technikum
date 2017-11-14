#include<conio.h>
#include<stdio.h>
int a,b,c,wynik;
bool koniec;
main()
{
printf("Wprowadz liczbe ");
scanf("%i", &a);
printf("Wprowadz liczbe ");
scanf("%i", &b);
printf("Wprowadz liczbe ");
scanf("%i", &c);
koniec=false;
if (((a==1)||(a==2))&&(koniec==false))
	{
	wynik=b+c;
	printf("Wynik: %i", wynik);
	koniec=true;
	}
	
if ((a==3)&&(b==3)&&(koniec==false))
	{
	printf("Wynik: %i", c);
	koniec=true;
	}
	
if ((c%2==0)&&(koniec==false))
	{
	printf("Wynik: %i", a);	
	koniec=true;
	}

if ((c%2!=0)&&(koniec==false))
	{
	wynik=b/a;
	printf("Wynik: %i", wynik);
	koniec=true;
	}

while(!kbhit());
}

