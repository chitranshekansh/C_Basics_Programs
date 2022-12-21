//Program to print reverse number
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter Number from which you want to print:");
scanf("%d",&n);
for(i=n;i>=0;i--)
{
printf("%d\t",i);
}
getch();
}
