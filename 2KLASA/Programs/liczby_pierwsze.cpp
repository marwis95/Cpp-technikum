#include<conio.h>
#include<stdio.h>
#include<math.h>

int i,j,zakres,b,licznik;
bool tab[100];

main()
{
printf("Podaj zakres (max 99) \n");
scanf("%i", &zakres);

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
    licznik=licznik+1;
}


  
printf("ilosc: %i", licznik);


while(!kbhit());
}
