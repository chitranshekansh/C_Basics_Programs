#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3];
void inputmatrix(int[3][3],int,int);
void outputmatrix(int[3][3],int,int);
clrscr();
inputmatrix(a,3,3);
outputmatrix(a,3,3);
getch();
}
void inputmatrix(int a[3][3],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter Value %d%d:",i,j);
scanf("%d",&a[i][j]);
}
}
}
void outputmatrix(int a[3][3],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
