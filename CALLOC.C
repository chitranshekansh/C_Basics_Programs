#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *p;
int i,b;
clrscr();
printf("Enter Number of Blocks:");
scanf("%d",&b);
p=(int*)calloc(sizeof(int),b);
for(i=1;i<=b;i++)
{
scanf("%d",p+i);
}
for(i=1;i<=b;i++)
{
printf("%d ",*(p+i));
}
free(p);
getch();
}