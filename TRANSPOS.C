#include<stdio.h>
#include<conio.h>
void main()
{
int A[8][8],i,j,row,col;
clrscr();

printf("Enter Number of Rows:");
scanf("%d",&row);
printf("Enter Number of Coloumn:");
scanf("%d",&col);
printf("Enter Matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter Value %d%d:",i,j);
scanf("%d",&A[i][j]);
}
}
printf("Matrix:\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("Transpose Matrix:\n");
for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
printf("%d\t",A[j][i]);
}
printf("\n");
}

getch();
}