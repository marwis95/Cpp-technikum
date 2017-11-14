#include<conio.h>
#include<stdio.h>
int liczba,suma;
main()
{
printf("Wprowadz liczbe: \n");
scanf("%i", &liczba);
suma=0;
suma=(liczba%10)+(liczba/10)%10+(liczba/100)%10;
printf("%i", suma);
while(!kbhit());
}

