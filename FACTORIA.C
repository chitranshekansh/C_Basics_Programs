//Program to find factorial
#include<stdio.h>
#include<conio.h>
void main()
{
long int i,fact=1,n;
clrscr();
printf("Enter Number:");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
fact*=i;
}
printf("The factorial value of %ld is:%ld",n,fact);
getch();
}
