#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
string marek;
main()
{
tab[1][1]='1';
tab[1][2]='i';
tab[1][3]='4';

printf("Podaj numer klasy \n");
scanf("%c", &tab[2][1]);
printf("Podaj symbol klasy \n");
scanf("%c", &tab[2][2]);
printf("Podaj srednia klasy \n");
scanf("%c", &tab[2][3]);
printf("\n");



printf("Klasa %c", tab[1][1]);
printf("%c", tab[1][2]);
printf(" ma srednia: %c \n", tab[1][3]);

printf("Klasa %c", tab[2][1]);
printf("%c", tab[2][2]);
printf(" ma srednia: %c", tab[2][3]);

while(!kbhit());
}

