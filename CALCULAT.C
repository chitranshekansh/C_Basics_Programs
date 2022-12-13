//Arthimetic Calculator Using Switch Case
#include<stdio.h>
#include<conio.h>
void main()
{
char x;
float a,b,res;
clrscr();
printf("Enter value 1:");
scanf("%f",&a);
printf("Enter value 2:");
scanf("%f",&b);
printf(" + for Addition\n - for Sutraction\n * for Product\n \\ for division\nPRESS:");
fflush(stdin);
scanf("%c",&x);
switch(x)
{
case '+': res=a+b;
	  break;
case '-': res=a-b;
	  break;
case '*': res=a*b;
	  break;
case '/': res=a/b;
	  break;
default : printf("Wrong Choice");
}
if(x=='+'||x=='-'||x=='*'||x=='/')
printf("RESULT:%.2f",res);
getch();
}
