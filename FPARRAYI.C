//Array input and output using pointer and function
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
void inputarray(int[],int);
void outputarray(int[],int);
clrscr();
printf("Enter Values in Array\n");
inputarray(a,10);
printf("Array is:\n");
outputarray(a,10);
getch();
}
void inputarray(int a[],int size)
{
int *b,i;
b=a;
for(i=0;i<size;i++)
scanf("%d",b+i);
}
void outputarray(int a[],int size)
{
int *b,i;
b=a;
for(i=0;i<size;i++)
printf("%d\t",*(b+i));
}