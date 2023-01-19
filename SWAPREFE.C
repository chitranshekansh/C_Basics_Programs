//Swap using Call by reference
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
void swap(int*,int*);
clrscr();
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
printf("Before Swapping\n");
printf("a=%d,b=%d",a,b);
swap(&a,&b);
printf("\nAfter Swapping\n");
printf("a=%d,b=%d",a,b);
getch();
}

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}