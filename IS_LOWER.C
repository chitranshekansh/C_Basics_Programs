#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int Is_lower(char);
clrscr();
printf("Enter Alphabet:");
scanf("%c",&a);
if(Is_lower(a))
{
printf("Lowercase");
}
else
{
printf("Not Lowercase");
}
getch();
}
int Is_lower(char a)
{
if(a>='a'&&a<='z')
return 1;
else
return 0;
}