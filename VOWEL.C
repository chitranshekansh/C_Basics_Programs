#include<stdio.h>
#include<conio.h>
void main()
{
char vow;
clrscr();
printf("Enter Alphabet to Check Vowel or Consonent:");
fflush(stdin);
scanf("%c",&vow);
if(vow=='A'||vow=='a'||vow=='E'||vow=='e'||vow=='I'||vow=='i'||vow=='O'||vow=='o'||vow=='U'||vow=='u')
{
printf("It is a Vowel");
}
else
{
printf("It is a Consonent");
}
getch();
}
