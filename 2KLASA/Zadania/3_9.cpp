#include<conio.h>
#include<stdio.h>
int liczba,suma,licznik;
main()
{
suma=0;
licznik=0;

do
{
printf("Wprowadz liczbe: ");
scanf("%i",&liczba);
licznik=licznik+1;
if (liczba%2==0) suma=suma+liczba;
} while((suma<100)&&(licznik<10));
printf("%i", suma);
while(!kbhit());
}

