//Extern
#include<stdio.h>
#include<conio.h>
#include"My.C"
void main()
{
extern int a,b,res; //these variables are defined in my.c file
int sum(int,int); //definition of this function is in my.c file
long int factorial(int);
clrscr();
printf("Sum=%d",sum(a,b));
printf("\na=%d",a);
printf("\nb=%d",b);
res=a*b;
printf("\nres=%d",res);
printf("\nFactorial=%d",factorial(5));
getch();
}