#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
int ackermann(int,int);
clrscr();
printf("Enter m:");
scanf("%d",&m);
printf("Enter n:");
scanf("%d",&n);
printf("Value:%d",ackermann(m,n));
getch();
}
int ackermann(int m,int n)
{
if(m==0)
return n+1;
else if((m>0)&&(n==0))
return ackermann(m-1,1);
else
return ackermann(m-1,ackermann(m,n-1));
}