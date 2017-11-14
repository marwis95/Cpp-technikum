#include <stdio.h>
#include <conio.h>
 
main()
{
int i, n, x;
int a[101];
 
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
a[n] = x;
i = 0;
while (a[i] != x)
{
i++;
}
 
//podaj wynik
if (i == n)
printf("Nie znaleziono w tablicy elementu %d\n", x);
else
printf("Odnaleziono element %d pod indeksem %d\n", x, i);

while(!kbhit());
}
