//Addition of Digits
#include<conio.h>
#include<stdio.h>
void main()
{
unsigned int num,res=0,rem;
clrscr();
printf("Enter Number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
num=num/10;
res+=rem;
}
printf("Sum of Digits is:%d",res);
getch();
}
