#include<conio.h>
#include<stdio.h>
int i,liczba,suma;
main()
{
for(i=0;i<10;i=i+1)
{
printf("Wprowadz liczbe: ");
scanf("%i", &liczba);
if (liczba%2==0) suma=suma+liczba;
}

printf("%i", suma);
while(!kbhit());
}


