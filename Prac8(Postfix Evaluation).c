#include<stdio.h>
#include<string.h>  
#include<ctype.h>
#include<math.h>  
#define max 10

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
		//printf("%d is inserted",item);
	}
}
int pop()
{
	int item;
	if(top == -1)
	{
		printf("\n Stack Underflow\n");
	}
	else
	{
		item = stack[top]; 
		top--; 
	}
	return item;
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


int main()
{
    char postfix[20] = {'\0'};
    char element; // to hold char of postfix notation
    int i=0,num1,num2,ans; 
    
    printf("\nEnter the Postfix Expression : ");
    scanf("%s",&postfix);
    
    while (i <= strlen(postfix)-1)
    {
    	element = postfix[i];
    	
    	if( isdigit(element) ) //operand
        {
        	push(element - '0');
	    }
		else  //operator 
		{
			num1 = pop();
			num2 = pop();
			
			switch(element)
			{
				case '+':
					ans = num2 + num1;
					break;
				case '-':
					ans = num2 - num1;
					break;
				case '*':
					ans = num2 * num1;
					break;
				case '/':
					ans = num2 / num1;
					break;
				case '^':
					ans = pow(num2,num1);
					break;
			}
			push(ans);
		}   	
    	i++;
    	display();
	}
	
	printf("\nThe Answer is : %d",stack[top]);
    
  	return 0;
}
