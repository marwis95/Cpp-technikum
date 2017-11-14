#include<conio.h>
#include<stdio.h>
int a,b,c;
main()
{
printf("Wprowadz liczbe: ");
scanf("%i", &a);
printf("Wprowadz liczbe: ");
scanf("%i", &b);
printf("Wprowadz liczbe: ");
scanf("%i", &c);
if (a!=1) printf("*\n");
if (b==3) printf("#\n");
if (c<7) printf("+++\n");
 
while(!kbhit());
}

