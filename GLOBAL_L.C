//Local and Global Variables
#include<stdio.h>
#include<conio.h>
int n=20;  //Global Declaration
int m=10;
void main()
{
int res=0;
void sub();
clrscr();
res=m+n;
/*:: is used for global
variable if there is already
a same variable is present*/
printf("n=%d\n",n);
printf("m=%d\n",m);
printf("res=%d",res);
if(m<n)
{
int x=10;  //Declaration is allowed because of new body
printf("\nx=%d",x);
}
sub();
getch();
}
void sub()
{
int res;
res=n-m;
printf("\nSub=%d",res);
}