#include<conio.h>
#include<stdio.h>
#include<math.h>
int a,wynik;
main()
{
printf("Wprowadz dlugosc boku \n");
scanf("%i", &a);
if (a<0) printf("Bok musi byc wartoœci¹ dodatni¹");
	else
	{
	wynik=pow(a,2);
	printf("Pole: %i \n", wynik);
	wynik=a*4;
	printf("Pole: %i", wynik);	
	}
while(!kbhit());
}

