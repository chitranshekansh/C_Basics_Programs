#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int Is_armstrong(int);
clrscr();
printf("Enter Number:");
scanf("%d",&n);
if(Is_armstrong(n))
printf("Number is Armstrong");
else
printf("Number is not Armstrong");
getch();
}
int Is_armstrong(int n)
{
int rem,temp,res=0,c;
int count(int);
int power(int,int);
c=count(n);
temp=n;
while(n!=0)
{
rem=n%10;
res=res+power(rem,c);
n/=10;
}
if(temp==res)
return 1;
else
return 0;
}
int count(int n)
{
int c=0;
while(n!=0)
{
n/=10;
c++;
}
return c;
}
int power(int b,int p)
{
int i,res=1;
for(i=1;i<=p;i++)
{
res*=b;
}
return res;
}