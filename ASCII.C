//Print All ASCII Characters with its Value
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=0;i<=255;i++)
{
if(i%25==0)
{
getch();
}
printf("%c=%d\t",i,i);
}
getch();
}