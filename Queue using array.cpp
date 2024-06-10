#include<stdio.h>
#define SIZE 10

void enQueue(int);
void deQueue();
void display();
int queue[SIZE],front=-1,rear=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n**MENU\n\n");
		printf("1.insertion\n 2.deletion\n 3.Display\n");
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("enter value to insert");
			scanf("%d",&value);
			enQueue(value);
			break;
			case 2:
				deQueue();
				break;
			case 3:
			display();
			break;
		}
	}
} 
void enQueue(int value)
{
	if(rear==SIZE-1)
	printf("\nQueue is full");
	else
	{
		if(front==-1)
		front=0;
		rear++;
		queue[rear]=value;
		printf("success");
	}
}
void deQueue(){
	if(front==rear)
	printf("Queue is empty");
	else{
		front++;
		if(front==rear)
		front=rear=-1;
	}
}
void display()
{
	if(rear=-1)
	printf("queue is empty");
	else{
		int i;
		printf("elements are: ");
		for(i=front;i<=rear;i++);
		printf("%d",queue[i]);
	}
}
