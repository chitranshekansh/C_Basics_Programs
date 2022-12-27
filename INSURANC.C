//Program to find insurance amount
#include<stdio.h>
#include<conio.h>
void main()
{
int age;
float amt,per;
char gen;
clrscr();
printf("Enter the Age:");
scanf("%d",&age);
printf("Press M for Male\nPress F for Female\nPress S if you are a Smoker \nEnter:");
fflush(stdin);
scanf("%c",&gen);
switch(gen)
{
case 'M':
if(age>=21&&age<=30)
{
amt=10000 ;
printf("Insurance Amount:%.2f",amt);
}
else if(age>=31&&age<=40)
{
amt=15000;
printf("Insurance Amount:%.2f",amt);
}
else if(age>=41&&age<=50)
{
amt=20000;
printf("Amount:%.2f",amt);
}
else if(age>=51&&age<=60)
{
amt=40000;
printf("Amount:%.2f",amt);
}
else
{
printf("Age Criteria not met Insurrance not possible");
}
break;
case 'F':
if(age>=21&&age<=30)
{
amt=10000;
per=(amt*10)/100;
amt=amt-per;
printf("Amount:%.2f",amt);
}
else if(age>=31&&age<=40)
{
amt=15000;
per=(amt*10)/100;
amt=amt-per;
printf("Amount:%.2f",amt);
}
else if(age>=41&&age<=50)
{
amt=20000;
per=(amt*10)/100;
amt=amt-per;
printf("Amount:%.2f",amt);
}
else if(age>=51&&age<=60)
{
amt=40000;
per=(amt*10)/100;
amt=amt-per;
printf("Amount:%.2f",amt);
}
else
{
printf("Age Criteria not met Insurrance not possible");
}
break;
case 'S':
if(age>=21&&age<=30)
{
amt=10000;
per=(amt*10)/100;
amt=amt+per;
printf("Amount:%.2f",amt);
}
else if(age>=31&&age<=40)
{
amt=15000;
per=(amt*10)/100;
amt=amt+per;
printf("Amount:%.2f",amt);
}
else if(age>=41&&age<=50)
{
amt=20000;
per=(amt*10)/100;
amt=amt+per;
printf("Amount:%.2f",amt);
}
else if(age>=51&&age<=60)
{
amt=40000;
per=(amt*10)/100;
amt=amt+per;
printf("Amount:%.2f",amt);
}
else
{
printf("Age Criteria not met Insurrance not possible");
}
break;
default:
printf("Wrong Choice");
}
getch();
}


