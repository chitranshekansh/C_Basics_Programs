//Program to print table
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,res=1;
clrscr();
printf("Enter Number to print table:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
res=n*i;
printf("%d x %d = %d\n",n,i,res);
}
getch();
}