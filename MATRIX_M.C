//Matrix Multiplication
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
void inputarray(int[10][10],int,int);
void mularray(int[10][10],int[10][10],int[10][10],int,int,int);
clrscr();
printf("Enter order of first matrix:");
scanf("%dx%d",&r1,&c1);
printf("Enter order of second matrix:");
scanf("%dx%d",&r2,&c2);
if(c1==r2)
{
printf("Enter Values for first matrix\n");
inputarray(a,r1,c1);
printf("Enter value for second matrix\n");
inputarray(b,r2,c2);
printf("Matrix Multiplication is:\n");
mularray(a,b,c,r1,c1,c2);
}
else
{
printf("Matrix Multiplication not possible");
}
getch();
}
void inputarray(int n[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter Value %d%d:",i,j);
scanf("%d",&n[i][j]);
}
}
}
void mularray(int a[10][10],int b[10][10],int c[10][10],int r1,int c1,int c2)
{
int i,j,k;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
 {
 c[i][j]=0;
  for(k=0;k<c1;k++)
  {
  c[i][j]+=a[i][k]*b[k][j];
  }
 }
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}       //funtion end