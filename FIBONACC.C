//Program to print Fibonacci Series
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,i,n;
clrscr();
printf("Enter Range:");
scanf("%d",&n);
printf("Enter the first initial value:");
scanf("%d",&a);
printf("Enter the second initial value:");
scanf("%d",&b);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
getch();
}
