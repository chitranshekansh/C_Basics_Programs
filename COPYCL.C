#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
FILE *fptr1,*fptr2;
char ch;
clrscr();
if(argc!=3)
{
printf("Invalid Arguements");
exit(1);
}
fptr1=fopen(argv[1],"r");
fptr2=fopen(argv[2],"w");
while((ch=fgetc(fptr1))!=EOF)
{
fputc(ch,fptr2);
}
printf("File Copied Successfully");
fclose(fptr1);
fclose(fptr2);
}