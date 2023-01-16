#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
clrscr();
printf("Enter String:");
fflush(stdin);
scanf("%[^\n]s",&a);
printf("%s",a);
getch();
}