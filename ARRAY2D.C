#include<stdio.h>
#include<conio.h>
void main()
{
int A[5][5],i,j,r,c;
clrscr();
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of coloumns:");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter Value %d%d:",i,j);
scanf("%d",&A[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}

getch();
}