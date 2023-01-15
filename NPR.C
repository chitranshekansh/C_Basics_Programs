//Program to calculate NPR
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
int npr(int,int);
clrscr();
printf("Enter n:");
scanf("%d",&n);
printf("Enter r:");
scanf("%d",&r);
printf("The nPr is:%d",npr(n,r));
getch();
}
int npr(int n,int r)
{
int fact(int);
return fact(n)/fact(n-r);
}
int fact(int n)
{
int i,res=1;
for(i=1;i<=n;i++)
{
res*=i;
}
return res;
}