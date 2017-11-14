#include<conio.h>
#include<stdio.h>
float x,wynik;
main()
{
printf("Wprowadz x: ");
scanf("%f", &x);
if (x<0) printf("6");
	else if ((x>=0)&&(x<=1))
		{
		wynik=(-3*x+6);	
		printf("%f", wynik);
		}
			else if (x>1) printf("3");


 
while(!kbhit());
}

