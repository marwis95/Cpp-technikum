#include<conio.h>
#include<stdio.h>
int a;
main()
{
printf("Wprowadz liczbe do sprawdzenia \n");
scanf("%i", &a);
if (a%2==0) printf("Parzysta");
	else printf("Nieparzysta");
while(!kbhit());
}

