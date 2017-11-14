#include<conio.h>
#include<stdio.h>
int a;
main()
{
printf("Wprowadz liczbe do sprawdzenia \n");
scanf("%i", &a);
if (a==0) printf ("Liczba to zero");
	else if (a<0) printf("Liczba jest ujemna");
		else printf("liczba jest dodatnia");

while(!kbhit());
}

