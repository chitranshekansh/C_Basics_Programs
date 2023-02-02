//Copy one file into another
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fptr1,*fptr2;
char ch;
char f1[20],f2[20];
clrscr();
printf("Enter File Name for Reading:"); //Source File
gets(f1);
fptr1=fopen(f1,"r");
printf("Enter File Name for Writing:"); //Destination File
gets(f2);
fptr2=fopen(f2,"w");
while((ch=fgetc(fptr1))!=EOF) //Until End of File
{
fputc(ch,fptr2);   //copy character by character in to destination file
}
printf("File Copied");
fclose(fptr1);
fclose(fptr2);
getch();
}