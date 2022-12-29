//Program to find Sum and Average using array and function
#include<stdio.h>
#include<conio.h>
void main()
{
int A[100],size,sum;
float avg;
void inputarray(int[],int);
int sumofarray(int[],int);
clrscr();
printf("Enter how many elements you want to input:");
scanf("%d",&size);
inputarray(A,size);
sum=sumofarray(A,size);
avg=sum/(float)size;
printf("Sum of Array:%d",sum);
printf("\nAverage of Array:%.3f",avg);
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
int sumofarray(int a[],int size)
{
int i,sum=0;
for(i=0;i<size;i++)
{
sum+=a[i];
}
return sum;
}