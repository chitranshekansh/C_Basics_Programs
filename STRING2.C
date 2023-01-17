//Using strcpy copy the one string into another
//Using strcat to concatenate two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20];
void copy(char[]);
void concatenate();
clrscr();
printf("Concatenation\n");
concatenate();
printf("String Copy\n");
printf("Original String:");
gets(str1);
copy(str1);
getch();
}
void copy(char str[20])
{
char str2[20];
printf("Copied String:");
strcpy(str2,str);
puts(str2);
}
void concatenate()
{
char str1[20],str2[20];
printf("Enter First String:");
gets(str1);
printf("Enter Second String:");
gets(str2);
strcat(str1,str2);
puts(str1);
}