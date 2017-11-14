#include<conio.h>
#include<stdio.h>
#include<math.h>

int i,j,zakres,b,licznik,liczba,cyfra,suma;
bool tab[1000];

main()
{
printf("Podaj zakres (max 99) \n");
scanf("%i", &zakres);
//liczba=zakres;

printf("Liczby pierwsze z przedzialu od 1 do ");
printf("%i \n", zakres);

b=sqrt((float)zakres);


for (i=2; i<zakres+1; i=i+1)
    tab[i]=true;

for (i=2; i<=b; i=i+1)
    
    if (tab[i]!=false)
    for (j=i+i; j<zakres+1; j=j+i)
    tab[j]=false;



for (i=2; i<zakres+1; i=i+1)
    if(tab[i]!=false)
    {
    printf("%i \n", i);
}
i=0;
do
      {
      liczba=tab[i];
      i=i+i;
      cyfra=liczba%10;
      if suma=suma+cyfra;
      liczba=liczba/10;
      }while (liczba>0);


  
printf("ilosc: %i", suma);


while(!kbhit());
}
