#include<stdio.h>
#define size 20

int queue[size];
int front=-1 , rear=-1;

int isFull()
{
	if(rear == size-1)
		return 1;
	else
	    return 0;
}
int isEmpty()
{
	if(front == -1)
		return 1;
	else
	    return 0;
}
void enqueue(int ele)
{
	if(rear == -1)
	{
		front = front + 1;
	}
	rear = rear + 1;
	queue[rear] = ele;
}
void dequeue()
{
	if(front > rear)
	{
		printf("\nThe Queue is Empty...");
	}
    else
   {
   	int ele;
	ele = queue[front];
	front++;
	printf("\n%d is deleted ...",ele);
   }
}
void display()
{
	int i;
	for (i = front; i<= rear; i++)
	{
		printf("%d |\t",queue[i]);
	}
}

int main()
{
	int run=1,choice,ele;
	
	while(run)
	{
	printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    
	  switch(choice)	
	  {
		case 1:
			if(isFull())
			{
				printf("\nQueue is Full..\n");
			}
			else
			{
			printf("\nEnter the Element : ");
			scanf("%d",&ele);
			enqueue(ele);	
			}
			break;
		case 2:
			if(isEmpty())
			{
				printf("\n Queue is Empty..\n");
			}
			else{
			dequeue();	
			}
			break;
		case 3:
			if(isEmpty())
			{
				printf("\n Queue is Empty..\n");
			}
			else{
			display();	
			}
			break;
		case 4:
			run = 0;
			break;
			
	  }
	}	
	
	return 0;
}
