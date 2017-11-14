#include<conio.h>
#include<stdio.h>
float x,wynik;
main()
{
printf("Podaj x \n");
scanf("%f", &x);
wynik=1/x;
printf("%f", wynik);
while(!kbhit());
}

