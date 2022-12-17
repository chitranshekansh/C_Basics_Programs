//Menu Driven Program to Implement Factorial,Power,Sum of digits
#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,b,p;
int fact(int);
int power(int,int);
int sumdigit(int);
clrscr();
printf("Press 1 to Calculate Factorial\nPress 2 to Calculate Power\nPress 3 to Calculate Sum of Digits\nEnter:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("Enter Number:");
scanf("%d",&n);
printf("Factorial is:%d",fact(n));
break;
case 2:
printf("Enter base:");
scanf("%d",&b);
printf("Enter power:");
scanf("%d",&p);
printf("Power is:%d",power(b,p));
break;
case 3:
printf("Enter Number:");
scanf("%d",&n);
printf("Sum of Digits is:%d",sumdigit(n));
break;
default: printf("Wrong Choice!!");
}
getch();
}
int fact(int n)
{
int i,res=1;
for(i=1;i<=n;i++)
{
res*=i;
}
return res;
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
int sumdigit(int n)
{
int rem,ans=0;
while(n!=0)
{
rem=n%10;
n=n/10;
ans=ans+rem;
}
return ans;
}