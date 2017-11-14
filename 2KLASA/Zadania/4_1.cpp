#include<conio.h>
#include<stdio.h>
int liczba,suma,licznik,dodane;
main()
{
suma=0;
licznik=0;
dodane=0;

do
{
printf("Wprowadz liczbe: ");
scanf("%i",&liczba);
licznik=licznik+1;
if ((liczba%2==0)&&(liczba>9)&&(liczba<100)) 
{
suma=suma+liczba;
dodane=dodane+1;
}
} while((suma<21)&&(licznik<5));
printf("Suma liczb: %i \n", suma);
printf("Ilosc podanych: %i \n", licznik);
printf("Ilosc wczytanych: %i \n", dodane);

while(!kbhit());
}

