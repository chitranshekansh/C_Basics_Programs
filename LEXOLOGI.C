//Bubble Sorting to arrange strings in lexological order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10][20];
char temp[20];
int i,j,pass,n;
clrscr();
n=5;
printf("Enter %d Strings\n",n);
for(i=0;i<n;i++)
{
gets(str[i]);
}
for(pass=1;pass<n;pass++)
{
for(j=0;j<(n-pass);j++)
{
if(strcmp(str[j],str[j+1])>0)
{
strcpy(temp,str[j]);
strcpy(str[j],str[j+1]);
strcpy(str[j+1],temp);
}
}
}
printf("\nLexological Order\n");
for(i=0;i<n;i++)
{
puts(str[i]);
}
getch();
}