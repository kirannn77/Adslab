#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*head=NULL;
void display()
{
struct node*temp=head;
printf("The linked list is:");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
}
void addatbeg()
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data for the new node");
scanf("%d",&newnode->data);
newnode->next=head;
printf("node inserted at the beginning successfully");
}
void addatend()
{
struct node*newnode=(struct node*)mallooc(sizeof(struct(*node));
printf("enter the data for the node:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
struct node *temp=head;
while(temp->next;
{
temp=temp->next;
}
temp->next=newnode;
}
printf("node inserted at the end successfully");
}
void addinbetween()
{
int pos,i;
printf("enter the position to insert:");
scanf("%d",&pos);
if(pos==1)
{
addatbeg();
return;
}
struct node*newnode=(structnode8)malloc(sizeof(struct node));
printf("enter the data of the node");
scanf("%d",&newnode->data;
struct node*temp=head;
for(i=1;i<pos-1;
