//Enumerated
#include<stdio.h>
#include<conio.h>
void main()
{
enum day{mon=1,tue,wed,thur,fri,sat,sun};
int i;
clrscr();
printf("Enter day:");
scanf("%d",&i);
switch(i)
{
case mon:
printf("Today is Monday");
break;
case tue:
printf("Today is Tuesday");
break;
case wed:
printf("Today is Wednesday");
break;
case thur:
printf("Today is Thursday");
break;
case fri:
printf("Today is Friday");
break;
case sat:
printf("Today is Saturday");
break;
case sun:
printf("Today is Sunday");
break;
default:
printf("Wrong Choice");
}
getch();
}