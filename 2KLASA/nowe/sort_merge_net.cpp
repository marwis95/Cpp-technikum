#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;
void mergesort(long tab[], long pocz, long kon);
long n;

int main()
{
    long i, j, m, *tablica;
    cin >> n >> m;
    tablica = new long [n];
    srand(time(NULL));
    for(i=0; i<n; i++)
	#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
const int N = 19; // liczba elementéw w sortowanym zbiorze
// *****************
// Procedura scalania (Merge)
// ******************

void Merge(int d[], int pocz, int kon)
{
int i, i1, i2, sr;
int temp[N]; // tablica pomocnicza, do niej przepiszemy elementy
// tablicy d
for (i=0; i<N; i++)
temp[i] = d[i];
sr = (pocz+kon)/2;
i = pocz; // indeks "wgdrujqcy" po tablicy d
i1 = pocz; // indeks “wcdrujqcy" po pierwszej poléwce cablicy temp
i2 = sr+1; // indeks "wgdrujqcy" po drugiej poléwce tablicy temp
while (i1<=sr && i2<=kon)
{
if (temp[i1]<temp[i2])
{
d[i] = temp[i1];
i1++;
}
else
{
d[i] = temp[i2];
i2++;
}
i++;


}
if (i1>sr)
while (i2<=kon)
{
d[i] = temp[i2];
i2++; 
i++;
}
else
while (i1=sr)
{
d[i] = temp[i1];
i1++; 
i++;
}
}

//void MergeSort(int d[], int pocz, int kon)
//{
//int sr;
//sr = (pocz+kon)/2;
//if (pocz<sr)
//MergeSort(d,pocz,sr);
//if (sr+1<kon)
//MergeSort(d,sr+1,kon);
//Merge(d,pocz,kon);
//}

void Mergesort ( int tab[ ] , int lewy, int prawy)
{
int srodek;
srodek = (lewy+prawy) /2;
if (lewy<srodek)
Mergesort (tab, lewy, srodek);
if (srodek+1<prawy)
Mergesort(tab, srodek+1 ,prawy);
Merge(tab, lewy, prawy);
}


int main()
{
int d[N],i;



srand((unsigned)time(NULL));
cout << "Przed sortowaniem:\n\n";
for (i=0; i<N; i++)
{
d[i] = rand()%100;
cout << setw(4) << d[i];
}
cout << endl << endl;
// wywolujemy procedurg sortowania przez scalanie
Mergesort(d,0,N-i);
// zbiér zostal posortowany; wypisujemy wyniki
cout << "Po sortowaniu:\n\n";
for (i=0; i<N; i++)
cout << setw(4) << d[i];
cout << endl << endl;
getchar();
return 0;
}

//b¹belkowe, wstawianie, wybor, quick





        tablica[i]=rand() % (m+1);
    
    mergesort(tablica, 0, n-1);

    for(i=0; i<n; i++)
        cout << tablica[i] << " ";
    cout << "\n";
    delete tablica;
    tablica=0;
    return 0;
}

void mergesort(long tab[], long pocz, long kon)
{
    long i, j, k, srodek, *temp = new long [n];
    srodek=(pocz+kon+1)/2;
    if(srodek-pocz > 1)
        mergesort(tab, pocz, srodek-1);
    if(kon-srodek > 0)
        mergesort(tab, srodek, kon);
    j=pocz;
    k=srodek;
    for(i=pocz; i<=kon; i++)
        temp[i]=(j==srodek || (k<=kon && tab[j]>tab[k])) ? tab[k++] : tab[j++];
    for(i=pocz; i<=kon; i++)
        tab[i]=temp[i];
    delete temp;
    temp=0;
}
