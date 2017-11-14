#include<conio.h>
#include<stdio.h>
int a,b,c;
main()
{
printf("Wprowadz poczatek przedzialu \n");
scanf("%i", &a);
printf("Wprowadz koniec przedzialu \n");
scanf("%i", &b);
printf("Wprowadz liczbe do wyszukania \n");
scanf("%i", &c);

if ((c>=a)&&(c<=b)) printf("Nalezy");
	else printf("Nienalezy");

while(!kbhit());
}

