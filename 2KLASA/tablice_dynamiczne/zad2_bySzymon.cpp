//wczytuje 2 liczby
//zamienia je miejscami
//dzieli wieksza przez mniejsza
//sprawdza ktora wieksza


#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <conio.h>

float a,b;

float zamien (float x,float y)
{
printf("Zamieniam: ");
printf("%.2f ",y);
printf("%.2f \n",x);
}

float podziel (float x,float y)
{
printf("Dziele: ");
if((x==0)||(y==0))
{
printf("nie dzielimy przez zero \n");
}
else
if(x>y)
printf("%.2f \n",x/y);
else
if(y>x)
printf("%.2f \n",y/x);
else
if(x=y)
printf("%.2f \n",x/y);
}

float wieksza (float x,float y)
{
printf("Ktora wieksza: ");
if(x>y)
printf("%.2f ",x);
else
if(y>x)
printf("%.2f ",y);
else
if(x=y)
printf("Sa rowne");

}

main()
{
printf("Podaj pierwsza liczbe ");
scanf("%f",&a);

printf("Podaj druga liczbe ");
scanf("%f",&b);

printf(" \n");

zamien(a,b);
podziel(a,b);
wieksza(a,b);

while(!kbhit());
}
