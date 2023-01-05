#include<stdio.h>
#include<conio.h>
void main()
{
int *n;
char *c;
float *f;
double *d;
clrscr();
printf("%p,%p,%p,%p",sizeof(n),sizeof(c),sizeof(f),sizeof(d));
//pointers size is depends upon the enviornment regardless of the datatype
getch();
}
