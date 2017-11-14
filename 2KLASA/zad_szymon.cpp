// wzór ogólny kurwaaa!!! ciag=((i-(i*i))/(3*(i*i*i)));
#include<conio.h>
#include<stdio.h>

int a,b;

void cwhile(int poczatek, int koniec){
float ciag, i;
i=poczatek;
do{
ciag=((i-(i*i))/(3*(i*i*i)));
printf("%0.f. ", i);
printf("%f\n", ciag);
i=i+1;
} while(i<koniec+1);


}

void cfor(int poczatek, int koniec){
float ciag, i;
for(i=poczatek;i<=koniec;i=i+1){
ciag=((i-(i*i))/(3*(i*i*i)));
printf("%0.f. ", i);
printf("%f\n", ciag);
}

}


main(){



int wybor;
printf("Menu :\n");
printf("1. Obliczanie petla for \n");
printf("2. Obliczanie petla while \n");
printf("3. Opcja 3 \n");
printf("4. Opcja 4 \n");
printf("5. Opcja 5 \n");
scanf("%i", &wybor);

switch(wybor)
{
case 1:{
printf("Poczatek: ");
scanf("%i", &a);
printf("\n");
printf("Koniec: ");
scanf("%i", &b);
if(a>b) printf("Blad"); else cfor(a,b);	
}
break;

case 2:{
printf("Poczatek: ");
scanf("%i", &a);
printf("\n");
printf("Koniec: ");
scanf("%i", &b);
if(a>b) printf("Blad"); else cwhile(a,b);		
}
break;
case 3:
printf("Szymon to gej");
break;
case 4:
printf("Szymon to murzyn");
break;
case 5:
printf("Szymon to Bhhoooocz");
break;
default:
printf("Nie ma takiej opcji");
break;
}


while(!kbhit());
}

