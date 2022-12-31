#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int Is_digit(char);
clrscr();
printf("Enter Digit:");
scanf("%c",&a);
if(Is_digit(a))
{
printf("Digit");
}
else
{
printf("Not Digit");
}
getch();
}
int Is_digit(char a)
{
if(a>='0'&&a<='9')
return 1;
else
return 0;
}