//PASCAL's TRIANGLE
#include<stdio.h>
#include<conio.h>
void main()
{
int res=1,sp,j,i,row;
clrscr();
printf("Enter Number of Rows:");
scanf("%d",&row);
for(i=0;i<=row;i++)
{
for(sp=0;sp<=row-i;sp++)
printf(" ");
for(j=0;j<=i;j++)
{
if(j==0||i==0)
{
res=1;
}
else
{
res=res*(i-j+1)/j;
}
printf("%d ",res);
}

printf("\n");
}

getch();
}
