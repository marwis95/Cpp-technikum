#include <stdio.h>
#include <conio.h>

int silniaiteracyjnie(int x)
{
int i,silnia = 1;
for(i=1; i<=x; i++)
{
silnia *= i;
}
return silnia;
}

int silniarekurencyjnie(int x)
{
if(x==0)
{
return 1;
}
else
{
return x*silniarekurencyjnie(x-1);
}
}

int main(void)
{
int a,b;
printf("Z jakiej liczby mam obliczyc silnie iteracyjnie i rekurencyjnie?\n");
scanf("%d",&a);
b = silniaiteracyjnie(a);
printf("Silnia iteracyjnie = %d\n",b);
b = silniarekurencyjnie(a);
printf("Silnia rekurencyjnie = %d\n",b);
getch();
}
