//Function For Arithimetic Calculations
#include<conio.h>
#include<stdio.h>
void main()
{
int i;
float a,b,res;
float sum(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
clrscr();
printf("Enter value for a:");
scanf("%f",&a);
printf("Enter value for b:");
scanf("%f",&b);
printf("Enter Choice\n Press 1 For Addition\n Press 2 For Subtraction\n Press 3 For Product\n Press 4 For Divide \n Enter:");
scanf("%d",&i);
switch(i)
{
case 1:res=sum(a,b);
printf("\nAddition is %.2f",res);
break;
case 2:res=sub(a,b);
printf("\nSubtraction is %.2f",res);
break;
case 3:res=mul(a,b);
printf("\nProduct is %.2f",res);
break;
case 4:res=div(a,b);
printf("\nDivision is %.2f",res);
break;
default : printf("Wrong Choice");

}
getch();
}
float sum(float x,float y)
{
float c;
c=x+y;
return c;
}
float sub(float x,float y)
{
float c;
c=x-y;
return c;
}
float mul(float x,float y)
{
float c;
c=x*y;
return c;
}
float div(float x,float y)
{
float c;
c=x/y;
return c;
}

