#include<conio.h>
#include<stdio.h>
int a,b,wynik;
char znak;
main()
{
printf("Wprowadz pierwsza liczbe \n");
scanf("%i", &a);
printf("Wprowadz pierwsza liczbe \n");
scanf("%i", &b);
printf("Wprowadz znak \n");
scanf("%s",&znak);

if (znak=='+')
	{
	wynik=a+b;
	printf("Wynik dodawania: %i", wynik);	
	}
	
if (znak=='-')
	{
	wynik=a-b;
	printf("Wynik odejmowania: %i", wynik);	
	}
	
if (znak=='*')
	{
	wynik=a*b;
	printf("Wynik mnozenia: %i", wynik);	
	}
	
if (znak=='/')
	{
	if (b!=0)
	{
	wynik=a/b;
	printf("Wynik dzielenia: %i", wynik);
	}
	else
	printf("Nie dziel przez zero!");	
	}

while(!kbhit());
}

