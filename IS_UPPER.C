//Program to check uppercase
#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int Is_upper(char);
clrscr();
printf("Enter Alphabet:");
scanf("%c",&a);
if(Is_upper(a))
{
printf("Uppercase");
}
else
{
printf("Not Uppercase");
}
getch();
}
int Is_upper(char a)
{
if(a>='A'&&a<='Z')
return 1;
else
return 0;
}