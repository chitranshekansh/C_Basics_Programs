#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,sum=0;
clrscr();
printf("Enter 10 Values in Array\n");
for(i=0;i<10;i++)
{
printf("Enter Value %d:",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum+=a[i];
}
printf("Sum of all values in array is:%d",sum);
getch();
}