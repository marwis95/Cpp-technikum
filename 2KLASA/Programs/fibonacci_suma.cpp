#include<conio.h>
#include<stdio.h>

int i, f1, f2, n, fn, suma;

main()
{
f1=1;
f2=1;
suma=2;
printf("Wyznaczanie sumy n-pierwszych wyrazen ciagu Fibonacciego \n");
printf("Podaj do ktorego elementu chcesz sumowac: ");
scanf("%i", &n);
if (n<0) printf("Nie wprowadzaj liczb ujemnych!");
   else
   {
   if (n==1) suma=1;
   else
   {
   if((n==1) ||(n==2)) fn=1;
             else
             for(i=3; i<=n; i=i+1)
                      {
                      fn=f1+f2;
                      f1=f2;
                      f2=fn; 
                      suma=suma+fn;     
                      }
                      
   }
}
      
printf("%i", suma);    
      
      
      
      
while(!kbhit());
}
