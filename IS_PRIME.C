#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
int Is_prime(int);
clrscr();
printf("Enter Number:");
scanf("%d",&n);
if(Is_prime(n))
{
printf("Prime Number");
}
else
{
printf("Not a Prime number");
}
getch();
}
int Is_prime(int n)
{
int i;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
return 0;
}
return 1;
}
