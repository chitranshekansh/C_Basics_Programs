#include<stdio.h>
#include<conio.h>
void main()
{
int *a,a1=10;
clrscr();
a=&a1;
*a=15;
printf("a1=%d",a1);
getch();
}