#include<conio.h>
#include<stdio.h>
#include<math.h>
#include <cstdlib>
#include <time.h>

int repeat, ciag;
int sil;
int tab[20];
int i;

int ciagg(int n){
int ppoprzedni=1;
int poprzedni=2;
int i;
int c;


for(int i=3;i<=n;i=i+1)
{
c=poprzedni+(2*i)+ppoprzedni;
ppoprzedni=poprzedni;
poprzedni=c;

}

if (n==1) return 1;
else if (n==2) return 2;
else return c;
}

int silnia(int n)
{
    if(n == 0)return 1;
    else return silnia(n-1)*n;
}

int suma_silni(int n)
{
    if(n==0)return 0;
    else 
         return suma_silni(n-1) + silnia(n);
}

int tablica(int a[20])
{
	int i;
	for (i=19; i>=0; i=i-1){
	printf("%i ", a[i]);
}
}

int j=19;

int tablica_rek(int a[20])
{
	
	if (j>=0){
	printf("%i ", a[j]);
	j=j-1;
	tablica_rek(a);
			}
}

void menu(){
int wybor;
system("cls");
printf("Menu :\n");
printf("1. Silnia \n");
printf("2. Ciag \n");
printf("3. Tablica \n");
printf("4. Exit \n");
scanf("%i", &wybor);

switch(wybor)
{
case 1:{
printf("Wprowadz liczbe ");
scanf("%i", &sil);


if (sil<0) printf("Nie ma silni z liczb ujemnych!!!"); else
if (sil==0) printf("0"); else
//printf("Suma silni: %i", suma_silni(3)); 
printf("%i", suma_silni(sil));
}
break;
case 2:{
printf("Ktory wyraz ciagu chcesz zobaczyc?? \n");
scanf("%i", &ciag);
printf("%i", ciagg(ciag));
}
break;
case 3:{
printf("\n");
srand(time(NULL));
for (i=0; i<20; i=i+1)
{
tab[i]= rand() % (10-1)+1;
printf("%i ", tab[i]);
}
printf("\n");
tablica(tab);
printf("\n");
tablica_rek(tab);	
break;
}
break;
case 4:{
}
break;
default:
printf("Nie ma takiej opcji");
break;
}
}

main(){
repeat=1;
do{
menu();
printf("\n");
printf("Uruchomic program ponownie?? (Nie-0 Tak-1) ");
scanf("%i", &repeat);
}while(repeat>0);

}
