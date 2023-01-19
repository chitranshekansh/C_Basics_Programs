#include<stdio.h>
#include<conio.h>
void main()
{
int A[5][5],B[5][5],C[5][5],row,col;
void inputmatrix(int[5][5],int,int);
void outputmatrix(int[5][5],int,int);
void summatrix(int[5][5],int[5][5],int[5][5],int,int);
clrscr();
printf("Enter Row:");
scanf("%d",&row);
printf("Enter Coloumn:");
scanf("%d",&col);
printf("Enter Value for Matrix A:\n");
inputmatrix(A,row,col);
printf("Enter Value for Matrix B:\n");
inputmatrix(B,row,col);
printf("Matrix A:\n");
outputmatrix(A,row,col);
printf("Matrix B:\n");
outputmatrix(B,row,col);
printf("Sum of A and B is\n");
summatrix(A,B,C,row,col);
getch();
}
void inputmatrix(int a[5][5],int r,int c)
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
void outputmatrix(int a[5][5],int r,int c)
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
void summatrix(int a[5][5],int b[5][5],int C[5][5],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
C[i][j]=a[i][j]+b[i][j];
}
}
outputmatrix(C,r,c);
}