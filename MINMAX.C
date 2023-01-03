#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],size,min,max,b;
void inputarray(int[],int);
int minofarray(int[],int);
int maxofarray(int[],int);
clrscr();
printf("Enter how many elements you want to input:");
scanf("%d",&size);
inputarray(a,size);
printf("Press 1 to find Minimum\nPress 2 to find Maximum\nEnter:");
scanf("%d",&b);
switch(b)
{
case 1:
min=minofarray(a,size);
printf("Minimum Value:%d",min);
break;
case 2:
max=maxofarray(a,size);
printf("\nMaximum Value:%d",max);
break;
default:
printf("Wrong Choices!!");
}
getch();
}
void inputarray(int a[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("Enter Value %d:",i+1);
scanf("%d",&a[i]);
}
}
int minofarray(int a[],int size)
{
int i,min;
min=a[0];
for(i=1;i<size;i++)
{
if(min>a[i])
{
min=a[i];
}
}
return min;
}
int maxofarray(int a[],int size)
{
int i,max;
max=a[0];
for(i=1;i<size;i++)
{
if(max<a[i])
{
max=a[i];
}
}
return max;
}
