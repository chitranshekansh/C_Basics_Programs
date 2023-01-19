#include<stdio.h>
#include<conio.h>
typedef struct complexnumber
{
int real;
int img;
}cn;
void main()
{
cn n1,n2,sum;
void getdata(cn*);
void putdata(cn);
cn addtwocn(cn,cn);
clrscr();
printf("Enter First Complex Number");
getdata(&n1);
printf("\nEnter Second Complex Number");
getdata(&n2);
printf("\nFirst Complex number");
putdata(n1);
printf("\nSecond Cmplex Number");
putdata(n2);
printf("\nSum of Complex Number");
sum=addtwocn(n1,n2);
printf("\n%d + i%d",sum);
getch();
}
void getdata(cn *f)
{
printf("\nEnter real part:");
scanf("%d",&(f->real));
printf("Enter imaginary part:");
scanf("%d",&(f->img));
}
void putdata(cn f)
{
printf("\n%d + i%d",f.real,f.img);
}
cn addtwocn(cn n1,cn n2)
{
cn n3;
n3.real=n1.real+n2.real;
n3.img=n1.img+n2.img;
return n3;
}