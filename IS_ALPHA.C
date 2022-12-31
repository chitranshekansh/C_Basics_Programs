//Program to check Alphabet
#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int Is_alphabet(char);
clrscr();
printf("Enter Character:");
scanf("%c",&a);
if(Is_alphabet(a))
{
printf("It is a Alphabet");
}
else
{
printf("It is not a Alphabet");
}
getch();
}
int Is_alphabet(char a)
{
if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
return 1;
else
return 0;
}