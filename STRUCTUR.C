#include<stdio.h>
#include<conio.h>
struct student
{
char sname[20];
int age;
char fname[20];
char add[30];
}s[5];
void main()
{
int i;
clrscr();
for(i=0;i<5;i++)
{
printf("Enter Student Name:");
fflush(stdin);
gets(s[i].sname);
printf("Enter Fathers Name:");
fflush(stdin);
gets(s[i].fname);
printf("Enter Address:");
fflush(stdin);
gets(s[i].add);
printf("Enter Age:");
scanf("%d",&s[i].age);
}
for(i=0;i<5;i++)
{
puts("\n-------------------------");
puts("Student Details");
puts("-------------------------");
printf("Student Name:%s",s[i].sname);
printf("\nFathers Name:%s",s[i].fname);
printf("\nAge:%d",s[i].age);
printf("\nAddress:%s",s[i].add);
}
getch();
}