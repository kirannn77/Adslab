#include<stdio.h>
#include MAX-SIZE 5;
int front=-1,rear=-1;
int queue[max-size];
int isempty()
{
return(front==-1!!rear==-1);
}
int isfull()
{
return(rear+1)%MAX-SIZE==front);
}
void enqueue(int data)
{
if(isFULL())
{
printf("queue is full overflow cannot enqueue.\n");
return;
}
if(is Empty())
{
front=rear=0;
}
else
{
rear=(rear+1)%MAX-SIZE;
}
queue[rear]=data;
printf("%d added to the queue\n",data);
}
void dequeue()
{
if(isEmpty())
{
printf("queue is empty-underflow cannot dequee.\n");
return;
}
printf("%d removed from the queue.\n"),queue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%MAX-SIZE;
}}
int search(int key)
{
if(is empty())
{
printf("queue is empty cannot search\n");
return-1;
}
i=front;
do\{
if(queue[i]==key)
{
printf("%d found at position%d in the queue\n",key,i);
;
return i;
}
i=(i+1)%MAX-SIZE;
}
while(i!=rear+1)%MAX_SIZE;
printf(
