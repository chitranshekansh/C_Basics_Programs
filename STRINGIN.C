#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
gets(str);
for(i=0;str[i]!='\0';i++)
{
printf("%c",str[i]);
}
getch();
}