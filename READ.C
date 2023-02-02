//To write a file on console
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
FILE *fptr;
clrscr();
fptr=fopen("array.c","r");
while((ch=fgetc(fptr))!=EOF)
 {
  printf("%c",ch);
 }
fclose(fptr);
getch();
}