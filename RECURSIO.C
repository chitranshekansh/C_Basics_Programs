#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int fib(int);
clrscr();
printf("Enter Number of Elements in series:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d\t",fib(i));
}
getch();
}
int fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return fib(n-1)+fib(n-2);
}