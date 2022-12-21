#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float SI,p,r,t,CI;
int choice;
clrscr();
printf("Enter Principle Amount:");
scanf("%f",&p);
printf("Enter Rate of Interest:");
scanf("%f",&r);
printf("Enter Time Given:");
scanf("%f",&t);
printf("PRESS 1 to Calculate Simple Interest\nPRESS 2 to Calculate Compound Interest\n Enter:");
scanf("%d",&choice);
switch(choice)
{
case 1:
SI=(p*r*t)/100;
printf("Simple Interest is:%.2f",SI);
break;
case 2:
break;
default : printf("Wrong Choice") ;
}
getch();
}
