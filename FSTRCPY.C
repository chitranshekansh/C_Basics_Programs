//Copying String Using my Function
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20],str2[20];
void mystrcpy(char[],char[]);
clrscr();
printf("Enter String:");
gets(str1);
mystrcpy(str2,str1);
printf("\n");
printf("Original String:%s\n",str1);
printf("Copied String:%s",str2);
getch();
}
void mystrcpy(char dest[],char src[])
{
int i;
for(i=0;src[i]!='\0';i++)
 {
  dest[i]=src[i];
 }
 dest[i]='\0';
}