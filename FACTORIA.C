//Program to find factorial
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
long int factorial(int);
clrscr();
printf("Enter Number:");
scanf("%d",&n);

printf("The factorial value of %d is:%ld",n,factorial(n));
getch();
}
long int factorial(int n)
{
int i;
long int fact=1;
for(i=1;i<=n;i++)
{
fact*=i;
}
return fact;
}