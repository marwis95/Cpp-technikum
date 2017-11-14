#include<conio.h>
#include<stdio.h>
#include <time.h>
#include <cstdlib>
int murzyn[20];
int i;
main()
{
srand(time(NULL));
for (i=0; i<20; i=i+1)
{
murzyn[i]= rand() % (-50-(-75))+-75;
printf("%i \n", murzyn[i]);
}
while(!kbhit());
}

