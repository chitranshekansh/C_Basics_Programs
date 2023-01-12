//Double Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int *a,**b,c;
clrscr();
c=20;
a=&c;
b=&a;
printf("c=%d\n",c);
printf("a=%d\n",*a); //derefrencing
printf("b=%d\n",**b);//double derefrencing
getch();
}