#include<conio.h>
#include<stdio.h>
int a,b,wynik;
main()
{
printf("Wprowadz pierwsza liczbe \n");
scanf("%i", &a);
printf("Wprowadz pierwsza liczbe \n");
scanf("%i", &b);
wynik=a+b;
printf("Wynik dodawania: %i \n", wynik);
wynik=a-b;
printf("Wynik odejmowania: %i \n", wynik);
wynik=a*b;
printf("Wynik mnozenia: %i \n", wynik);

if (b==0) printf("Nie bede dzielil przez zero!");
	else
	{
	wynik=a/b;
	printf("Wynik dzielenia: %i", wynik);	
	}

while(!kbhit());
}

