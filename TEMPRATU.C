#include<stdio.h>
#include<conio.h>
void main()
{
float F,C;
int x;
clrscr();
printf("Enter 1 to Convert in Farenheit to \nCelsius and Enter 2 to Convert Farenheit to Celsius:");
scanf("%d",&x);
switch(x)
{
case 1:
       printf("Enter value in Farenheit to convert:");
       scanf("%f",&F);
       C=(F-32)*5.0/9.0;
       printf("Value in Celsius is:%f",C);
       break;
case 2:
       printf("Enter value in Celcius to convert:");
       scanf("%f",&C);
       F=(C+32)*9.0/5.0;
       printf("Value in Farenheit is:%f",F);
       break;
default :
       printf("Wrong Choice");
}
getch();
}