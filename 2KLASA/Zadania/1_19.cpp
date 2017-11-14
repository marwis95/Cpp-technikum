#include<conio.h>
#include<stdio.h>
#include<math.h>

float x,wynik;
main()
{
printf("Podaj x \n");
scanf("%f", &x);
if (x<0) printf("x nie moze byc ujemne");
	else
	{
	wynik=(sqrt(x+7));
	printf("%f", wynik);	
	}

while(!kbhit());
}
