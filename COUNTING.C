//Program to dispaly counting of numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter Number upto which you want to display counting:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\t",i);
}
getch();
}
