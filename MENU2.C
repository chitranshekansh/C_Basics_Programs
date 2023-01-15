//Menu Driven to check Prime and Armstrong
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int num,a,res;
int arm(int);
int prime(int);
clrscr();
printf("Enter Number:");
scanf("%d",&num);
printf("Press 1 to Check Armstrong\nPress 2 to Check Prime\nEnter:");
scanf("%d",&a);
switch(a)
{
case 1:
if(arm(num))
{
printf("Number is Armstrong");
}
else
{
printf("Number is Not Armstrong");
}
break;
case 2:
if(prime(num))
{
printf("Prime Number");
}
else
{
printf("Not a Prime Number");
}
break;
default: printf("Wrong Choice");
}
getch();
}
int arm(int n)
{
int rem,sum=0,temp,c;
int count(int);
temp=n;
c=count(n);
while(n>0)
{
rem=n%10;
sum=sum+(pow(rem,c));
n=n/10;
}
if(temp==sum)
return 1;
else
return 0;
}
int count(int n)
{
int c=0;
while(n!=0)
{
n=n/10;
c++;
}
return c;
}
int prime(int n)
{
int i;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
return 0;
}
return 1;
}
