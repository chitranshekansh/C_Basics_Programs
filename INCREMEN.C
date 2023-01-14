#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b;
clrscr();
printf("Value:%d\n",a);
b=++a + ++a + a++ + a;
printf("Value:%d\n",b);
printf("Value:%d\n",a);
getch();
}
