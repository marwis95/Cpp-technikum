#include<conio.h>
#include<stdio.h>
float x,wynik;
main()
{
printf("Podaj x \n");
scanf("%f", &x);
if (x==0) printf("0");
	else if (x>0) printf("1");
		else printf("-1");

while(!kbhit());
}

