#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;
void losuj(int n, int t[]);
int main()
{
int t[20];
int a ;


cout<<" Podaj wielkosc tablicy: " ;
cin>>a;
srand(time(NULL));
losuj(a,t);
for(int i=0; i<a; i++)
cout<<"("<<i<<") "<< t <<endl;

return 0;
}
void losuj(int n, int t[])
{
t[n]=rand();
if (n>=0)
losuj(n-1,t);
} 
