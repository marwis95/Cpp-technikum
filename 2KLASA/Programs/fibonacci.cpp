#include<conio.h>
#include<stdio.h>

int i, f1, f2, n, fn;

main()
{
f1=1;
f2=1;
printf("Obliczanie N-tego elementu ciagu Fibonacciego \n");
printf("Podaj ktory element checesz zobaczyc: ");
scanf("%i", &n);
if (n<0) printf("Nie wprowadzaj liczb ujemnych!");
   else
   {
   if((n==1) ||(n==2)) fn=1;
             else
             for(i=3; i<=n; i=i+1)
                      {
                      fn=f1+f2;
                      f1=f2;
                      f2=fn;      
                      }
                      
   }
      
printf("%i", fn);    
      
      
      
      
while(!kbhit());
}
