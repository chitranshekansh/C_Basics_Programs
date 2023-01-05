//Pointer Arthimetic
#include<stdio.h>
#include<conio.h>
void main()
{
char c;
float x,y;
float res;
float *a,*b;
clrscr();
printf("Enter Value 1:");
scanf("%f",&x);
printf("Enter Value 2:");
scanf("%f",&y);
a=&x;
b=&y;
printf("Press + for Additon\nPress - for Subtraction\nPress * for Product\nPress / for Division\nEnter:");
fflush(stdin);
scanf("%c",&c);
switch(c)
{
case '+':res=(*a)+(*b);
printf("Addition:%.2f",res);
break;
case '-':res=(*a)-(*b);
printf("Subtration:%.2f",res);
break;
case '*':res=(*a)*(*b);
printf("Product:%.2f",res);
break;
case '/':res=(*a)/(*b);
printf("Division:%.2f",res);
break;
default:printf("Wrong Choice");
}
getch();
}