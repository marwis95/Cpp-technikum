#include<conio.h>
#include<stdio.h>
#include <time.h>
#include <cstdlib>
int tab[7][5];
int i,j;
int wybor,temp,nrmax,nrmin;
float srednia,max,min;
main()
{
system("cls"); 
i=0;
j=0;
srand(time(NULL));
for (i=0; i<7; i=i+1)
{
printf("\n");
for (j=0; j<5; j=j+1)
{
tab[i][j]= rand() % (7-1)+1;
printf("%i\t", tab[i][j]);
}
}

printf("\n");
printf("Menu :\n");
printf("1.Oblicz srednia kazdego ucznia \n");
printf("2.Oblicz srednia z kazdego przedmiotu \n");
printf("3.Oblicz srednia klasy \n");
scanf("%i", &wybor);
switch(wybor)
{
case 1:
{
system("cls"); 
temp=0;
i=0;
j=0;
max=0;
min=6;
for (i=0; i<7; i=i+1)
{
printf("\n");
for (j=0; j<5; j=j+1)
temp=tab[i][j]+temp;	

srednia=float(temp)/float(j);
if (srednia>max)
{
max=srednia;
nrmax=i+1;
}
if (srednia<min)
{
min=srednia;
nrmin=i+1;
}

printf("Uczen %i", i+1);
printf(" ma srednia: %0.1f", srednia);

temp=0;
srednia=0;
}
printf("\n");
printf("\n");
printf("Najlepszy jest uczen %i", nrmax);
printf(", ma srednia %0.1f", max);
printf("\n");
printf("Najgorszy jest uczen %i", nrmin);
printf(", ma srednia %0.1f", min);
break;
}


case 2:
{system("cls"); 
temp=0;
i=0;
j=0;
max=0;
min=6;
srednia=0;
for (i=0; i<5; i=i+1)
{
printf("\n");
for (j=0; j<7; j=j+1)
temp=tab[i][j]+temp;	

srednia=float(temp)/float(j);
if (srednia>max)
{
max=srednia;
nrmax=i+1;
}
if (srednia<min)
{
min=srednia;
nrmin=i+1;
}

printf("Przedmiot %i", i+1);
printf(" srednia: %0.1f", srednia);

temp=0;
srednia=0;
}
printf("\n");
printf("\n");
printf("Najlepsza srednia jest z %i", nrmax);
printf(", wynosi ona %0.1f", max);
printf("\n");
printf("Najgorsza srednia jest z %i", nrmin);
printf(", wynosi ona %0.1f", min);
break;
}

case 3:
{
system("cls"); 
i=0;
j=0;
for(i=0;i<5;i=i+1)
{
	for(j=0;j<7;j=j+1)
	{
	temp=tab[i][j]+temp;
	}
}
srednia=temp/(i*j);
printf("Srednia klasy: %0.1f", srednia);
break;
}
default:
printf("Zly wybor");
break;
}


while(!kbhit());
}
