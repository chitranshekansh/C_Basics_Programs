#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],sum,size;
void inputarray(int[],int);
void outputarray(int[],int);
int sumofarray(int[],int);
clrscr();
printf("Enter how many elements you want to input:");
scanf("%d",&size);
inputarray(a,size);
outputarray(a,size);
sum=sumofarray(a,size);
printf("\nSum of Array is:%d",sum);
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
void outputarray(int a[],int size)
{
int i;
for(i=0;i<size;i++)
printf("Index %d=%d\n",i,a[i]);
}
int sumofarray(int a[],int size)
{
int i,sum=0;
for(i=0;i<size;i++)
sum+=a[i];
return sum;
}