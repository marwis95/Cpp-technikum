#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
float w[10];
float x,wynik=0;
int i,k=4;


printf("podaj stopien wielomianu: ");
scanf("%d",&k);

for (i=0;i<=k;i++)
{
printf("podaj wspolczynnik przy potedze %d: ",k-i);
scanf("%f",&w[i]);
}

printf("podaj x: ");
scanf("%f",&x);

for (i=1;i<=k;i++)
wynik=wynik*x+w[i];
printf("wartosc wielomianu W(x)=");

for(i=0;i<=k;i++) printf("%2.0fx^%d+",w[i],k-i);

printf( " dla x=%0.2f wynosi %0.2f",x,wynik);

getche();
return 0;
}
