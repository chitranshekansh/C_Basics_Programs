#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter Octal value:");
scanf("%o",&a);
printf("Hexadecimal Value:%x",a);
printf("\nEnter hexadecimal value:");
scanf("%x",&b);
printf("Octal Value:%o",b);
getch();
}
