#include<conio.h>
#include<stdio.h>
float a,b,wynik;
main()
{
printf("Wprowadz liczbe \n");
scanf("%f", &a);
printf("Wprowadz liczbe \n");
scanf("%f", &b);

if (b>a) printf ("Pierwsza liczba musi byc wieksza \n"); 
	else
	{
	wynik=int(a)/int(b);
	printf("Wynik dzielenia calkowitego %.0f \n", wynik)	;
	wynik=int(a)%int(b);
	printf("Reszta z dzielenia %.0f \n", wynik);
	wynik=a/b;
	printf("Wynik z dzielenia rzeczywistego %f \n", wynik);
	}
while(!kbhit());
}

