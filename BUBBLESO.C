//BUBBLE SORTING
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,temp,n;
clrscr();
printf("Enter Size of Array:");
scanf("%d",&n);
printf("Enter Array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Original Array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nSorted Array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}