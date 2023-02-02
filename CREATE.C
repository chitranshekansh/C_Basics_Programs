//To create a file and write in it
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
char fname[20];
FILE *fptr;
clrscr();
printf("Enter File name for writing:");
gets(fname);
fptr=fopen(fname,"w");
while((ch=getche())!='$')
{
fputc(ch,fptr);
}
fclose(fptr);
}