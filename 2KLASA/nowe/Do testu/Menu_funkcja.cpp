#include<conio.h>
#include<stdio.h>
#include<math.h>
#include <cstdlib>

int repeat;



void menu(){
int wybor;
system("cls"); 
printf("Menu :\n");
printf("1. ***** \n");
printf("2. ***** \n");
printf("3. ***** \n");
printf("4. ***** \n");
printf("5. ***** \n");
scanf("%i", &wybor);

switch(wybor)
{            
case 1:
printf("1");
break;
case 2:
printf("2");
break;
case 3:
printf("3");
break;
case 4:
printf("4");
break;
case 5:
printf("5");
break;
default:
printf("NIe ma takiej opcji");
break;
}
}





main(){
repeat=1;
do{
	menu();
	printf("\n");
	printf("Czy chcesz kontynuowac (Nie-0 Tak-1) ");
	scanf("%i", &repeat);
}while(repeat>0);

while(!kbhit());



}   


         

