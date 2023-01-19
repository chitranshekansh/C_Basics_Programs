#include<stdio.h>
#include<conio.h>
typedef struct studentrecord
{
char name[20];
int age;
char sem[10];
int marks;
}stu;
void main()
{
stu s[5];
void getdata(stu*);
void putdata(stu[5]);
void maxmarks(stu*);
void total(stu*);
clrscr();
getdata(s);
printf("Student Details:\n");
putdata(s);
printf("Maximum Marks\n");
maxmarks(s);
printf("\nTotal Marks of All Students:");
total(s);
getch();
}

void getdata(stu *f)
{
int i;
for(i=0;i<3;i++)
{
printf("Enter Student %d Details\n",i+1);
printf("Enter Name:");
fflush(stdin);
gets(f[i].name);
printf("Enter Age:");
scanf("%d",&f[i].age);
printf("Enter Semester:");
scanf("%s",&f[i].sem);
printf("Enter Marks:");
scanf("%d",&f[i].marks);
}
}

void putdata(stu f[])
{
int i;
printf("Student Name\tStudent Age\tSemester\tMarks");
printf("\n------------------------------------------------------\n");
for(i=0;i<3;i++)
{
printf("%s\t\t%d\t\t%s\t\t%d",f[i].name,f[i].age,f[i].sem,f[i].marks);
printf("\n");
}
printf("-------------------------------------------------------\n");
}

void maxmarks(stu *f)
{
int i,n;
n=f[0].marks;
for(i=0;i<3;i++)
{
if(n<f[i].marks)
{
n=f[i].marks;
}
}
printf("%d\n",n);
for(i=0;i<3;i++)
 {
  if(n==f[i].marks)
   {
    printf("Student Name with Max Marks:%s",f[i].name);
    break;
   }
 }
}

void total(stu *f)
{
int total=0,i;
for(i=0;i<3;i++)
{
total=total+f[i].marks;
}
printf("%d",total);
}