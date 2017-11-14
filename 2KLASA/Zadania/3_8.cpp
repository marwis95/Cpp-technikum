#include<conio.h>
#include<stdio.h>
int liczba,suma;
main()
{
suma=0;
do
{
printf("Wprowadz liczbe: ");
scanf("%i",&liczba);
if (liczba%2==0) suma=suma+liczba;
} while(suma<100);
printf("%i", suma);
while(!kbhit());
}

