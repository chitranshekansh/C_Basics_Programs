//Program to find sum of numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter Number upto which you want to calculate Sum:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("Sum is:%d",sum);
getch();
}
