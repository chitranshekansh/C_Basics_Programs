#include<stdio.h>
#include<conio.h>
void main()
{
char sname[30],fname[30],add[30];
int Avg,eng,hindi,math,sst,sci;
clrscr();
printf("Enter Your Name:");
gets(sname);
printf("Enter Your Father's Name:");
gets(fname);
printf("Enter Your Address:");
gets(add);
printf("Enter Your Marks English Hindi Maths SST Science:");
scanf("%d%d%d%d%d",&eng,&hindi,&math,&sst,&sci);
Avg=(eng+hindi+math+sst+sci)/5;
printf("\n--------------------------------------");
printf("\n------------MARKSHEET-----------------");
printf("\nName:%s",sname);
printf("\nFather Name:%s",fname);
printf("\nAddress:%s",add);
printf("\n______________________________________");
printf("\nEnglish:\t%d\nHindi:\t\t%d\nMathematics:\t%d\nSocial Science:\t%d\nScience:\t%d",eng,hindi,math,sst,sci);
printf("\n______________________________________");
printf("\nPercentage:\t%d%",Avg);
printf("\n______________________________________");
getch();
}

