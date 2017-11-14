#include<conio.h>
#include<stdio.h>
int wybor;
main()
{
printf("Wprowadz liczbe \n");
scanf("%i", &wybor);
printf("Wprowadziles: ");
switch(wybor)
{
case 0:
printf("zero");
break;
case 1:
printf("jeden");
break;
case 2:
printf("dwa");
break;
case 3:
printf("trzy");
break;
case 4:
printf("cztery");
break;
case 5:
printf("piec");
break;
case 6:
printf("szesc");
break;
case 7:
printf("siedem");
break;
case 8:
printf("osiem");
break;
case 9:
printf("dziewiec");
break;
default:
printf("cos innego");
break;
}

while(!kbhit());
}

