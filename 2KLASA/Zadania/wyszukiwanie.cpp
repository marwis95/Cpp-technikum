#include<stdio.h>
#include<conio.h> 
#include<cstdlib> 
int i, n, x;
int a[100];

main()
{

 
//pobierz dane od uzytkownika
printf("Podaj liczbe elementow tablicy (max. 100)\n");
scanf("%d", &n);
for (i=0; i<n; i++)
{
printf("Podaj element a[%d]\n", i);
scanf("%d", &a[i]);
}
printf("Podaj element do wyszukania\n");
scanf("%d", &x);
 
//szukaj elementu x
for (i=0; i<n; i++)
{
if (a[i] == x)
{
//podaj wynik
printf("Odnaleziono element %d pod indeksem %d\n", x, i);
//zakoncz program
break;
}
}
 
//podaj wynik
printf("Nie odnaleziono elementu %d\n", x);
while(!kbhit());
}
