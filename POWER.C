#include<stdio.h>
#include<conio.h>
void main()
{
int i,b,p,res=1;
clrscr();
printf("Enter Base Number:");
scanf("%d",&b);
printf("Enter Power:");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
res*=b;
}
printf("Result:%d",res);
getch();
}
