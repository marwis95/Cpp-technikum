#include <stdio.h>


int silnia(int n)
{
    if(n == 0)return 1;
    else return silnia(n-1)*n;
}

int suma_silni(int n)
{
    if(n==0)return 0;
    else 
         return suma_silni(n-1) + silnia(n);
}
int main(void)
{
    printf("Suma silni: %i", suma_silni(3));    
    getchar();getchar();
    return 0;    
}
