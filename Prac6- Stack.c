#include<stdio.h>
#define max 5

int stack[max],top=-1;

void push(int item)
{
	if(top>=max-1)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		top++;
		stack[top] = item;
		printf("%d is inserted",item);
	}
}
void pop()
{
	if(top == -1)
	{
		printf("\n Stack Underflow\n");
	}
	else
	{
		top--;
	}
}
void display()
{
	int i;
	printf("\nThe Stack elements are: \n");
	for(i=top;i>-1;i--)
	{
		printf("\n%d",stack[i]);
	}
}

void peep()
{
	if( top == -1)
	{
		printf("\n The Stack is empty");
	}
	else
	{
		printf("\n The Top of the stack is %d",stack[top]);
	}
}

void change(int index,int item)
{
	if( index > top)
	{
		printf("\nInvalid Index");
	}
	else
	{
		int i;
		for(i=0;i<=top;i++)
		{
			if(i == index)
			{
				stack[index] = item;
				break;
			}
		}
	}
}

int main()
{
	int run=1,choice,item,index;
	
	while(run)
	{
	  printf("\nEnter the Choice :\n");
  	  printf("\t 1. Push - Insert into Stack\n");
      printf("\t 2. Pop - remove top of the Stack\n");
  	  printf("\t 3. Peep - to display top of stack\n");
  	  printf("\t 4. Change - change ith element into Stack\n");
  	  printf("\t 5. Display - print the stack element\n");
      printf("\t 6. Exit \n");
      
      printf("\n Select the Choice: ");
      scanf("%d",&choice);
      
      switch(choice)
      {
      	case 1:
      		printf("\nEnter the element to insert: ");
      		scanf("%d",&item);
      		push(item);
      		break;
      	case 2:
      		pop();
      		break;
      	case 3:
      		peep();
      		break;
      	case 4:
      		printf("\n Enter the index : ");
      		scanf("%d",&index);
      		
      		printf("\n Enter the value : ");
      		scanf("%d",&item);
      		
      		change(index,item);
      		break;
      	case 5:
      		display();
      		break;
      	case 6:
      		run=0; //0 - false
      		break;
      	default:
      		printf("\nInvalid Option\n");
	  }
	  }
	  
  	return 0;
}
