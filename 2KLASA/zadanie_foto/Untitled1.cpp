//napisz funkcje (rek i it) obliczaj¹c¹ wartoœæ podanego wyrazu ci¹gu
//1-1 2-2     An-1+2n+An-2
#include<conio.h>
#include<stdio.h>



int ciag(int n){
if(n==1) return 1;
if (n==2) return 2;
else return ciag(n-1+2*n-2);
}

int ciagit(int n){
int x,i;
x=2;

for (i=2; i<=n; i=i+1)
    if (i%2==0) x=x+3;
    else x=x*2;                
return x;  
}


main()
{
int a;

printf("Podaj liczbe \n");
scanf("%i", &a);
printf("%i \n", ciag(a));
printf("%i", ciagit(a));

while(!kbhit());
}
