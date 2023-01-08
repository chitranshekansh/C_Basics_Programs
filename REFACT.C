//Program to find factorial using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
long int n;
long int fact(long int);
clrscr();
printf("Enter Number:");
scanf("%ld",&n);
printf("Factorial:%ld",fact(n));
getch();
}
long int fact(long int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}