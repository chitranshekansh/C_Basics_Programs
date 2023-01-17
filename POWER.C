#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
int power(int,int);
clrscr();
printf("Enter Base Number:");
scanf("%d",&x);
printf("Enter Power:");
scanf("%d",&y);
printf("Result:%d",power(x,y));
getch();
}
int power(int x,int y)
{
int i,res=1;
for(i=1;i<=y;i++)
{
res*=x;
}
return res;
}
