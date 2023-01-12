#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter Number to Check:");
scanf("%d",&num);
if(num%2==0)
printf("Even Number");
else
printf("Odd Number");
getch();
}
