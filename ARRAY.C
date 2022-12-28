#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
printf("Enter 10 Values in Array\n");
for(i=0;i<10;i++)
{
printf("Enter Value %d:",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("\nIndex %d=%d",i,a[i]);
}
getch();
}