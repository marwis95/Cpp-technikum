#include<conio.h>
#include<stdio.h>
int i;
main()
{
for(i=10;i<301;i=i+1)
{
if (((i%3==0)&&(i%5==0))||((i%4==0)&&(i%7==0))) printf("%i \n", i);
}

while(!kbhit());
}

