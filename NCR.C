//Program to calculate fatorial using function
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
int ncr(int,int); //Function Declaration
clrscr();
printf("Enter n:");
scanf("%d",&n);
printf("Enter r:");
scanf("%d",&r);
printf("nCr value of n=%d and r=%d is:%d",n,r,ncr(n,r));//Function Calling
getch();
}
int ncr(int n,int r)
{
int fact(int);
return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n)//Function Definition
{
int res=1,i;
for(i=1;i<=n;i++)
{
res*=i;
}
return res;
}