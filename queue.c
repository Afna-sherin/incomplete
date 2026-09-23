#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0,rear=0;
void main()
{
void enque(int);
int deque,opt,item;
void print();
do{
printf("\n1.enque\n2.deque\n3.Display\n4.Exit\n");
printf("enter your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("enter your item:");
scanf("%d",&item);
enque(item);
break;
case 2:
item=deque();
printf("deleted value=%d",item);
break;
case 3:
exit(0);
}
}while(9);
}
//function to insert an item
void enque(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("queue is full");
else
{
rear=temp;
que[rear]=item;
}
return;
}
//function to delete an item from queue
int deque()
{
if(front==rear)
printf
