#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node_type
{
int info;
struct node_type *next;
}node;
void main()
{
int i,value,size;
node *ptr,*head=NULL,*temp;
clrscr();
printf("Enter Size:");
scanf("%d",&size);
for(i=1;i<=size;i++)
{
ptr=(node*)malloc(sizeof(node)); //pointer gets the address of memory block
printf("Enter Value %d:",i);
scanf("%d",&value);
ptr->info=value; //value gets stored in info
ptr->next=head;
head=ptr;
}
while(head!=NULL)
{
printf("%d\t",head->info);
temp=head;
head=head->next;
free(temp);
}
getch();
}