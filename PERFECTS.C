//Perfect Square Series
#include<stdio.h>
#include<conio.h>
void main()
{
int i,res,n;
clrscr();
printf("Enter Range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
res=1;
res=i*i;
printf("%d\t",res);
}
getch();
}
