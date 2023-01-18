#include<stdio.h>
#include<conio.h>
void main()
{
void display(int);
clrscr();
display(10);
getch();
}
void display(int a)
{
if(a==1)
{
printf("\n%d",a);
}
else
{
printf("\n%d",a);
display(a-1);       //Tail Recursion
}
}