//Sum of array using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],*b,i,sum=0;
clrscr();
printf("Enter Values in Array\n");
b=a;
for(i=0;i<10;i++)
{
scanf("%d",b+i);
}
for(i=0;i<10;i++)
{
sum+=*(b+i);
}
printf("Sum of Elements is:%d",sum);
getch();
}